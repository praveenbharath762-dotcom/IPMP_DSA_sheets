#include<iostream>
#include <vector>
using namespace std;
int getOddOccurrence(vector<int>&arr, int n)
{
    for (int i = 0; i < n ; i++) {
        
        int count = 0;
        
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            return arr[i];
    }
    return -1;
}
int main()
    {
       vector<int>arr { 2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2 };
        int n = arr.size();
        cout << getOddOccurrence(arr, n);
        return 0;
    }