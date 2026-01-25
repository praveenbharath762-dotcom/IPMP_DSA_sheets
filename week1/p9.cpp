#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoOddNum(vector<int>& arr) {
    int n = arr.size();
    
    vector<int> ans = {-1, -1};
    int index = 0;
    for (int i=0; i<n; i++) {
        int cnt = 0;
        for (int j=0; j<n; j++) {
            if (arr[j]==arr[i]) cnt++;
        }
        if (cnt%2==1 && ans[0]!=arr[i] && ans[1]!=arr[i]) {
            ans[index++] = arr[i];
        }
    }
    if (ans[0]<ans[1]) swap(ans[0], ans[1]);
    return ans;
}

int main() {
    vector<int> arr = {12, 23, 34, 12, 12, 23, 12, 45};
    vector<int> ans = twoOddNum(arr);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}