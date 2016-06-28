#include <iostream>
#include <cmath>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

int solution_PermMissingElem(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)

    sort(A.begin(), A.end());

    int index = 1;

    for(auto& item: A)
    {
        if(item != index)
            break;

        index++;
    }

    return index;
}

int main()
{
    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {2, 3, 1, 5};
    //-1000, 1000
    //int myints[] = {-10, -20, -30, -40, 100};
    std::vector<int> A(myints, myints + sizeof(myints) / sizeof(int) );

    int result = solution_PermMissingElem(A);

    std::cout<<endl;
    std::cout << "result = " << result << endl;
    return 0;
}
