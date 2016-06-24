#include <iostream>
#include <cmath>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

int solution_OddOccurrencesInArray(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int original_size = A.size();
    // empty
    if(original_size == 0)
        return 0;

    // k larger than A size
    if(original_size == 1)
    {
        return A.front();
    }

    vector<int>::iterator it_a = A.begin();
    vector<int>::iterator it_end = A.end();
    sort(it_a, it_end);
    for(; it_a != it_end; it_a++)
    {

        if(*it_a == *(it_a+1))
            it_a++;
        else
            return *it_a;
    }

    // fail to find
    return 0;
}

int main()
{
      // the iterator constructor can also be used to construct from arrays:
    int myints[] = {3, 5, 6, 7, 6, 5, 3};
    std::vector<int> A(myints, myints + sizeof(myints) / sizeof(int) );

    int result = solution_OddOccurrencesInArray(A);

    for (std::vector<int>::iterator it = A.begin(); it != A.end(); ++it)
        std::cout << ' ' << *it;

    std::cout<<endl;
    std::cout << "result = " << result << endl;
    return 0;
}
