// Fibonacci Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Fibonacci Numbers.h"

int* GetFibonacciNumbersIterative(int count)
{
	int* arr = new int[count]();
	arr[0] = 0;
	if (count < 2)
	{
		return arr;
	}
	arr[1] = 1;
	for(int i = 2; i < count; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr;
}
int* GetFibonacciNumbers(int& count, int* arr, int index)
{
	arr[index] = arr[index - 1] + arr[index - 2];
	index++;
	if (index < count)
	{
		return GetFibonacciNumbers(count, arr, index);
	}
	return arr;
}
int* RecursiveFibonacci(int count)
{
	int* arr = new int[count]();
	arr[0] = 0;
	if (count < 2)
	{
		return arr;
	}
	arr[1] = 1;
	if (count > 2)
	{
		GetFibonacciNumbers(count, arr, 2);
	}
	return arr;
}
void FibonacciNumbers(int length)
{
	std::cout << "Enter the amount of fibonacci numbers: ";
	if ((std::cin >> length) && length > 0)
	{
		int* recursiveArray = RecursiveFibonacci(length);
		int* iterativeArray = GetFibonacciNumbersIterative(length);

		std::cout << "Fibonacci numbers iterative: ";

		for (int i = 0; i < length; i++)
		{
			std::cout << iterativeArray[i] << " ";
		}

		std::cout << std::endl << "Fibonacci numbers recursive: ";
		for (int i = 0; i < length; i++)
		{
			std::cout << recursiveArray[i] << " ";
		}
		std::cout << std::endl;
		delete iterativeArray;
		delete recursiveArray;
	}
	else
	{
		std::cout << "Invalid input" << std::endl;
	}
}
int main()
{
	
	
	int length = 6;
	while (true)
	{
		FibonacciNumbers(6);
	}
}

