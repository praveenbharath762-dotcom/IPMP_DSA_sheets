#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rearrange(int arr[], int n)
    {
        vector<int> positiveVec, negativeVec;

        for (int i = 0; i < n; ++i) {
            if (arr[i] >= 0)
                positiveVec.push_back(arr[i]);
            else
                negativeVec.push_back(arr[i]);
        }

        int posIndex = 0, negIndex = 0, arrIndex = 0;
        bool positiveTurn = true;

        while (posIndex < positiveVec.size()
               && negIndex < negativeVec.size()) {
            if (positiveTurn)
                arr[arrIndex++] = positiveVec[posIndex++];
            else
                arr[arrIndex++] = negativeVec[negIndex++];
            positiveTurn = !positiveTurn;
        }
        while (posIndex < positiveVec.size())
            arr[arrIndex++] = positiveVec[posIndex++];

        while (negIndex < negativeVec.size())
            arr[arrIndex++] = negativeVec[negIndex++];
    }
};
int main()
{
    Solution solution;
    int arr[] = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    solution.rearrange(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}