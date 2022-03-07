// Arithmetic Progression.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool IsArithmeticProgression(int* arr, int length)
{
    if (length < 2)
    {
        return false;
    }
    int difference = arr[0] - arr[1];
    for (int i = 1; i < length - 1; i++)
    {
        if ((arr[i] - arr[i + 1]) != difference)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int integers [5] = {1, 1, 1, 1, 1};
    int length = sizeof(integers) / sizeof(*integers);

    if (IsArithmeticProgression(integers, length))
    {
        std::cout << "Array has arithmetic progression";
    }
    else
    {
        std::cout << "Array doesn't have arithmetic progression";
    }
}
