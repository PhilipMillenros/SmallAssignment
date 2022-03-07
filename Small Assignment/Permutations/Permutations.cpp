// Permutations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
void Swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}
void Permutations(std::string input, int index = 0)
{
	int newIndex = index;
	newIndex += 1;
	int start = index == 0 ? 0 : 1;
	for (int i = index + start; i < input.size(); i++)
	{
		
		std::string newInput = input;
		Swap(newInput[index], newInput[i]);
		
		Permutations(newInput, newIndex);
		
		std::cout << newInput << std::endl;
	}
}

int main()
{
	Permutations("abc");
}
