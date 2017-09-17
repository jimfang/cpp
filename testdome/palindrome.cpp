/*
A palindrome is a word that reads the same backward or forward.

Write a function that checks if a given word is a palindrome. Character case should be ignored.

For example, isPalindrome("Deleveled") should return true as character case should be ignored, resulting in "deleveled", which is a palindrome since it reads the same backward and forward.
*/

#include <string>
#include <stdexcept>
#include <iostream>
#include <algorithm>

class Palindrome
{
public:
    static bool isPalindrome(const std::string& word)
    {
        if(word.empty())
            return false;
        
        std::string working = word;
        std::transform(working.begin(), working.end(), working.begin(), ::tolower);
        if(working == std::string(working.rbegin(), working.rend()))
            return true;
        
        return false;
    }
};

#ifndef RunTests
int main()
{
    std::cout << Palindrome::isPalindrome("Deleveled");
}
#endif