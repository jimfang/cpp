#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

// lib support
int lib_ShiftToNextBit1(int &changeN)
{
    int count = 0;
    do
    {
        changeN /= 2;
        count++;
    }while(changeN%2 ==0);

    return count;
}

// algorithm main
int solution_MaxBinaryGap(int N)
{
    int referGap = 0;
    int referFactor = 0;

    // 1. input check
    if(abs(N) < 2)
        return referGap;

    // 2. initialize reference factors
    referGap = 1;
    referFactor = 2;

    // 3. do search with variable reference
    int currentN = N;
    while(currentN > referFactor)
    {
        int count = 0;

        // trace each iterator
        cout<<"----- refer: gap=" << referGap << \
         ". currentN = " << currentN << \
         ". factor="<<referFactor<<endl;


        // condition there is 1 in referfactor
        if(currentN % referFactor)
        {
            // shift currentN to cut nearest 1
            count = lib_ShiftToNextBit1(currentN);
            assert(count <= referGap);
        }
        else
        {
            currentN /= referFactor;
            count = lib_ShiftToNextBit1(currentN);

            referGap += count;
            referFactor <<= count;
        }

    }

    // 4. return if iterator finished
    return referGap;
}

int main()
{
    cout << "Hello world!" << endl;
    int N = 2;
    int gap = 0;
    gap = solution_MaxBinaryGap(N);
    cout<< "Number " << N <<": BinaryGap = " << gap << endl;

    N = 8;
    gap = solution_MaxBinaryGap(N);
    cout<< "Number " << N <<": BinaryGap = " << gap << endl;

    N = 100000;
    gap = solution_MaxBinaryGap(N);
    cout<< "Number " << N <<": BinaryGap = " << gap << endl;

    return 0;
}
