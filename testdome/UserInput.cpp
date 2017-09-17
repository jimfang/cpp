/*
User interface contains two types of user input controls: TextInput, which accepts all characters and NumericInput, which accepts only digits.

Implement the following methods:

add on class TextInput - adds the given character to the current value
getValue on class TextInput - returns the current value
add on class NumericInput - overrides the base class method so that each non-numeric character is ignored
For example, the following code should output "10":

TextInput* input = new NumericInput();
input->add('1');
input->add('a');
input->add('0');
std::cout << input->getValue();
*/

#include <iostream>
#include <string>

class TextInput
{
public:
    virtual void add(char c) { text.push_back(c); }

    virtual std::string getValue() {return text;}
    
private:
    std::string text;
};

class NumericInput : public TextInput 
{ 
public:
    void add(char c) 
    {
        if(isdigit(c))
            numString.push_back(c);
    }
    
    std::string getValue() { return numString;}
    
private:
    std::string numString;
};

#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif