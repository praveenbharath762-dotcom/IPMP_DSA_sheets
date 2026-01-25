#include <bits/stdc++.h>
using namespace std;
vector<int> twoRepeated(vector<int> &arr)
{
    int i, j;
    int size = arr.size();
    int x = -1, y = -1;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                if (x == -1)
                    x = arr[i];
                else if (y == -1)
                    y = arr[i];
                break;
            }
        }
    }
    return {x, y};
}
int main()
{
    vector<int> arr = {4, 2, 4, 5, 2, 3, 1};
    vector<int> ans = twoRepeated(arr);
    cout << ans[0] << " " << ans[1];
    return 0;
}