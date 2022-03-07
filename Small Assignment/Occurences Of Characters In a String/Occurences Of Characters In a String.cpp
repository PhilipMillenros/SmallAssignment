#include <iostream>
#include <string>
#include <map>
#include <vector>
void PrintOccurences(std::map<char, int>& occurences, const std::string& text)
{
    std::vector<char> uniqueChars;
    uniqueChars.reserve(text.size());
    for (int i = 0; i < text.size(); i++)
    {
        if (std::find(uniqueChars.begin(), uniqueChars.end(), toupper(text[i])) == uniqueChars.end() && text[i] != ' ')
        {
            uniqueChars.push_back(toupper( text[i]));
            std::cout << (char)toupper(text[i]) << ": " << occurences[text[i]] << std::endl;
        }
    }

}
void SearchForOccurences(const std::string& text)
{
    std::map<char, int> occurences;
    
    for (size_t i = 0; i < text.size(); i++)
    {
        occurences[tolower(text[i])]++;
        occurences[toupper(text[i])]++;
    }
    PrintOccurences(occurences, text);
}
int main()
{
    std::string text = "Hello my name is Philip";
    std::cout << "Input: " << text << std::endl;
    std::cout << "Output:" << std::endl << "{" << std::endl;
    SearchForOccurences(text);
    std::cout << "}" << std::endl;
}

