#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int CountVowels(const string& text);
int CountWords(const string& text);
string Reverse(const string& text);
string CapitalizeSecondLetters(string text);

int main()
{
    ifstream file("statement.txt");

    if (!file.is_open())
    {
        cout << "Could not open the file." << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);
    file.close();

    cout << "Text: " << fileData << endl;
    cout << "Vowels: " << CountVowels(fileData) << endl;
    cout << "Words: " << CountWords(fileData) << endl;
    cout << "Reversed: " << Reverse(fileData) << endl;
    cout << "Second letters capitalized: " << CapitalizeSecondLetters(fileData) << endl;

    return 0;
}

int CountVowels(const string& text)
{
    int count = 0;
    for (char c : text)
    {
        char lower = tolower(static_cast<unsigned char>(c));
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
        {
            count++;
        }
    }
    return count;
}

int CountWords(const string& text)
{
    int count = 0;
    bool insideWord = false;

    for (char c : text)
    {
        if (c != ' ' && !insideWord)
        {
            insideWord = true; 
            count++;
        }
        else if (c == ' ')
        {
            insideWord = false;
        }
    }
    return count;
}

string Reverse(const string& text)
{
    string reversed;
    for (int i = static_cast<int>(text.size()) - 1; i >= 0; i--)
    {
        reversed += text[i];
    }
    return reversed;
}

string CapitalizeSecondLetters(string text) 
{
    int positionInWord = 0;

    for (size_t i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
        {
            positionInWord = 0;
        }
        else
        {
            if (positionInWord == 1)
            {
                text[i] = toupper(static_cast<unsigned char>(text[i]));
            }
            positionInWord++;
        }
    }
    return text;
}