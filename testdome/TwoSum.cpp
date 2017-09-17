/*
Write a function that, given a vector and a target sum, returns zero-based indices of any two distinct elements whose sum is equal to the target sum. If there are no such elements, the function should return (-1, -1).

For example, findTwoSum({ 1, 3, 5, 7, 9 }, 12) should return a std::pair<int, int> containing any of the following pairs of indices:

1 and 4 (3 + 9 = 12)
2 and 3 (5 + 7 = 12)
3 and 2 (7 + 5 = 12)
4 and 1 (9 + 3 = 12)
*/


#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>

class TwoSum
{
public:
    static std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
    {
        std::pair<int, int> ipair = std::make_pair(-1, -1);
        std::unordered_map<int, int> imap;
        std::vector<int>::const_iterator it = list.begin();
   

        for(; it != list.end(); it++)
        {
            int isearch = sum - *it;
            std::unordered_map<int, int>::const_iterator mit = imap.find(isearch);
            if(mit == imap.end())
            {
                imap[*it] = it - list.begin();
            }
            else
            {
                // return when find the first pair
                ipair.first = it-list.begin();
                ipair.second = imap[isearch];
                break;
            }
        }
        
        return ipair;
    }
};

#ifndef RunTests
int main()
{
    std::vector<int> list;
    list.push_back(1);
    list.push_back(3);
    list.push_back(5);
    list.push_back(7);
    list.push_back(9);

    std::pair<int, int> indices = TwoSum::findTwoSum(list, 12);
    std::cout << indices.first << '\n' << indices.second;
}
#endif