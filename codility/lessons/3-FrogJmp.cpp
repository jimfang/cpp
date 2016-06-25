#include <iostream>
#include <cmath>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

int solution_FrogJmp(int X, int Y, int D) {
    // write your code in C++11 (g++ 4.8.2)
    int step = 0;

    int distance = Y - X;
    step = (int) (distance/D);

    if(distance % D)
        step += 1;

    return step;
}

int main()
{
    int result = solution_FrogJmp(10, 90, 25);

    std::cout<<endl;
    std::cout << "result = " << result << endl;
    return 0;
}
