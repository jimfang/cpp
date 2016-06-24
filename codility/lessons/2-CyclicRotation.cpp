#include <iostream>
#include <cmath>
#include <cassert>
#include <vector>

using namespace std;

vector<int> solution_CyclicRotation(vector<int> &A, int K) {
    // write your code in C++11 (g++ 4.8.2)
    int original_size = A.size();
    // empty
    if((K == 0)||(K == original_size)||(original_size == 0))
        return A;

    // k larger than A size
    if(K > original_size)
    {
        K %= original_size;
    }

    vector<int> B;

    do
    {
        B.insert(B.begin(), A.back());
        A.pop_back();
        K--;
    }while(K>0);

    A.insert(A.begin(), B.begin(), B.end());

    return A;
}

int main()
{
      // the iterator constructor can also be used to construct from arrays:
    int myints[] = {3, 8, 9, 7, 6};
    std::vector<int> A(myints, myints + sizeof(myints) / sizeof(int) );

    solution_CycleRotation(A, 3);

    for (std::vector<int>::iterator it = A.begin(); it != A.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    return 0;
}
