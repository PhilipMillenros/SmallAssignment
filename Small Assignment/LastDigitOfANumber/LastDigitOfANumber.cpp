// LastDigitOfANumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int GetSingleDigitInValue(const int value, int index)
{
    std::string num = std::to_string(value);
    int x = num[index] - '0';
    return x;
}
int main()
{
   
    int x = 137;
    int y = GetSingleDigitInValue(x, 2);

    std::cout << y;
}


