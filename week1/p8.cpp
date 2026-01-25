#include <bits/stdc++.h>
using namespace std;
vector<int> singleNum(vector<int>& arr) {
    int n = arr.size();
    
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {

            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            ans.push_back(arr[i]);
        }
    }  
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> arr = { 1, 2, 3, 2, 1, 4 };
    vector<int> ans = singleNum(arr);
    for(auto it:ans)
        cout<<it<<" ";
    return 0;
}