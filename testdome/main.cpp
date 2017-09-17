#include <iostream>
#include <string>


#ifndef RunTests
void executeTest()
{

    std::cout << "Question " << i + 1 << ", correct answer: " << test.getAnswer(i) << "\n";    
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Test: " << i + 1 << "\n";
        executeTest();
    }
}
#endif