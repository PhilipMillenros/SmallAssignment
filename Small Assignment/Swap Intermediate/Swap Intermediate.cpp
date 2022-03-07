// Swap Intermediate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void Swap(int* a, int* b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main()
{
    int a = 12;
    int b = 3;

    int* aPtr = &a;
    int* bPtr = &b;
    std::cout << "Input: a = " << a << ", b = " << b << std::endl;
    Swap(aPtr, bPtr);
    std::cout << "Output: a = " << a << ", b = " << b << std::endl;
}
