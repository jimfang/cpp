#include <iostream>
#include <cmath>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

int solution_TapeEquilibrium(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    if(A.size() == 0)
        return 0;

    //initialize
    vector<int>::iterator it = A.begin();
    // n == 0
    int sum_pre_n = *it;
    int sum_post_n = 0;
    int min_diff = 0;

    // count from 2
    it++;
    for(; it != A.end(); it++)
    {
        sum_post_n += *it;
    }

    // first gap
    min_diff = abs(sum_post_n - sum_pre_n);

    // quit if only have two item
    if(A.size() == 2)
        return min_diff;

    // do loop check
    it = A.begin();
    it++;

    // loop till before last item
    for(; (it+1)!= A.end(); it++)
    {
        sum_pre_n += *it;
        sum_post_n -= *it;

        int curr_diff = abs(sum_post_n - sum_pre_n);
        if(curr_diff < min_diff)
            min_diff = curr_diff;
    }


    return min_diff;
}

int main()
{
    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {3, 1, 2, 4, 3};
    //-1000, 1000
    //int myints[] = {-10, -20, -30, -40, 100};
    std::vector<int> A(myints, myints + sizeof(myints) / sizeof(int) );

    int result = solution_TapeEquilibrium(A);

    std::cout<<endl;
    std::cout << "result = " << result << endl;
    return 0;
}
