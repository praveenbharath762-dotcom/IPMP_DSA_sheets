#include <iostream>
#include <vector>
using namespace std;

vector<int> repeatedNumber(const vector<int>& nums)
{
    long long n = nums.size();
    long long sum = 0;
    long long sumSq = 0;

    for (int x : nums)
    {
        sum += (long long)x;
        sumSq += (long long)x * (long long)x;
    }

    long long expectedSum = n * (n + 1) / 2;
    long long expectedSumSq = n * (n + 1) * (2 * n + 1) / 6;

    long long diff = sum - expectedSum;
    long long diffSq = sumSq - expectedSumSq;

    long long sumAB = diffSq / diff;

    long long A = (diff + sumAB) / 2;
    long long B = A - diff;

    return {(int)A, (int)B};
}

int main()
{
    vector<int> nums = {3, 1, 2, 5, 3};
    vector<int> result = repeatedNumber(nums);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}