#include <iostream>
#include <string>

const std::string GetInput()
{
    std::string s{};
    if ((std::getline(std::cin, s)))
    {
        return s;
    }
    else
    {
        std::cout << "Invalid input!" << std::endl;
        return GetInput();
    }
}
std::string ReverseCollection(std::string& input)
{
    std::string output(input.length(), '0');
    for (int i = 0; i < input.size(); i++)
    {
        output[i] = input[input.size() - i - 1];
    }
    return output;
}

int main()
{
    while (true)
    {
        std::cout << "Enter some text: ";
        std::string input = GetInput();
        std::cout << "Reversed text: " << ReverseCollection(input) << std::endl;
    }
    
}


