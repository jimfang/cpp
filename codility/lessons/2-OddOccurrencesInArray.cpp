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

    vector<int> B;
    vector<int>::iterator it_a = A.begin();
    for(; it_a!=A.end(); it_a++)
    {
        // if appear in B
        vector<int>::iterator it_b = find(B.begin(), B.end(), *it_a);
        if(it_b != B.end())
        {
            continue;
        }

        // not appeared, count
        int num = count(it_a, A.end(), *it_a);

        if(num%2==0)
        {
            B.push_back(*it_a);
        }
        else
        {
            return *it_a;
        }

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
    std::cout << "result = " << result << '\n';
    return 0;
}
