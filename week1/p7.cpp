#include <iostream>
#include <vector>
using namespace std;

int repeatedNumber(const vector<int>& A)
{
    int candidate1 = 0, candidate2 = 0;
    int count1 = 0, count2 = 0;

    for (int x : A)
    {
        if (candidate1 == x)
            count1++;
        else if (candidate2 == x)
            count2++;
        else if (count1 == 0)
        {
            candidate1 = x;
            count1 = 1;
        }
        else if (count2 == 0)
        {
            candidate2 = x;
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    count1 = 0;
    count2 = 0;

    for (int x : A)
    {
        if (x == candidate1) count1++;
        else if (x == candidate2) count2++;
    }

    int n = A.size();

    if (count1 > n / 3) return candidate1;
    if (count2 > n / 3) return candidate2;

    return -1;
}

int main()
{
    vector<int> nums = {3, 2, 3};
    cout << repeatedNumber(nums) << endl;
    return 0;
}