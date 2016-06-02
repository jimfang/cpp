#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

// algorithm main
int solution_MaxBinaryGap(int N)
{
    int maxGap = 0;

    int cntOne = 0;
    int gap = 0;

    while(N != 0)
    {
        // check every bit
        if(N&0x01)
        {
            // tailing 0
            if(cntOne == 0)
                gap = 0;

            cntOne++;
        }
        else
        {
            gap++;
        }

        // check ones
        if(cntOne == 2)
        {
            maxGap = max(gap, maxGap);
            gap = 0;
            cntOne = 1;
        }

        N >>= 1;
    }

    // 4. return if iterator finished
    return maxGap;
}

int main()
{
    cout << "Hello world!" << endl;
    int N = 2;
    int gap = 0;

    N = 561892; //42;
    gap = solution_MaxBinaryGap(N);
    cout<< "Number " << N <<": BinaryGap = " << gap << endl;

    return 0;
}
