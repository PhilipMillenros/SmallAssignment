// Lucky Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>

std::string IntegerToString(int integer)
{
    return std::to_string(integer);
}
bool IsLuckyNumber(int input)
{
    std::string integerString = IntegerToString(input);
    std::map<char, bool> occurences;
    for (size_t i = 0; i < integerString.size(); i++)
    {
        if (!occurences[integerString[i]])
        {
            occurences[integerString[i]] = true;
        }
        else
        {
            return false;
        }
    }
    return true;
}
void LuckyNumberProgram()
{
    int input;
    std::cout << "Enter input: ";
    std::cin >> input;
    if (!std::cin.fail())
    {
        if (IsLuckyNumber(input))
        {
            std::cout << "The number " << input << " is a lucky number!";
        }
        else
        {
            std::cout << "The number " << input << " is not a lucky number!";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Invalid input" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
    }
}
int main()
{
    while (true)
    {
        LuckyNumberProgram();
    }
    
}