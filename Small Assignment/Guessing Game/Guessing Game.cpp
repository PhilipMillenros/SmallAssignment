#include <iostream>
#include <random>

int GenerateRandomNumber(int min, int max)
{
    std::random_device random;
    std::mt19937 rng(random());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(min, max);
    return dist6(rng);
}
int GetPlayerInput()
{
    int input{};
    std::cout << "Enter your guess: ";
    while (!(std::cin >> input))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid number, please enter a valid number: ";
    }
    return input;
}
bool GetResult(int input, int randomNumber) 
{
    if (input == randomNumber)
    {
        std::cout << "Your guess was correct!" << std::endl;
        return true;
    }
    if (input < randomNumber)
    {
        std::cout << "Incorrect, the secret number is bigger!" << std::endl;
    }
    else
    {
        std::cout << "Incorrect, the secret number is smaller!" << std::endl;
    }
    return false;
}
void GuessingGame(int min, int max) 
{
    std::cout << "Generating secret number between " << min << " and " << max << "..." << std::endl;
    int randomNumber = GenerateRandomNumber(min, max);
    int guessCount = 1;
    bool guessing = true;
    while (guessing)
    {
        int input = GetPlayerInput();
        if (GetResult(input, randomNumber))
        {
            std::cout << "It took you " << guessCount << " tries!" << std::endl;
            guessing = false;
        }
        else
        {
            guessCount++;
        }
    }
}
int main()
{
    int min = 1;
    int max = 100;
    while (true)
    {
        GuessingGame(min, max);
    }
}

