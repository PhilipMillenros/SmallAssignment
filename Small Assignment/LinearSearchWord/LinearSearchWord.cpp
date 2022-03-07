// LinearSearchWord.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool SearchForWordInText(char* word, int wordLength, char* text, int textLength)
{
	for (int i = 0; i < textLength; i++)
	{
		if (toupper(text[i]) == toupper(word[0]) && wordLength <= textLength - i)
		{
			if (i != 0 && text[i - 1] != ' ')
			{
				continue;
			}

			bool matched = true;
			for (int y = 0; y < wordLength - 1; y++)
			{
				if (toupper(text[y + i]) != toupper(word[y]))
				{
					matched = false;
					break;
				}
			}
			if (matched && (i + wordLength - 1) == textLength - 1 || text[i + wordLength - 1] == ' ')
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	char text[] = "A text that you can search for words in";

	int textLength = sizeof(text) / sizeof(*text);
	
	char word[] = "search";
	int wordLength = sizeof(word) / sizeof(*word);

	if (SearchForWordInText(word, wordLength, text, textLength))
	{
		std::cout << word << " was found!";
	}
	else
	{
		std::cout << word << " wasn't found!";
	}
	
}