#include <iostream>
#include <vector>
using namespace std;
int missingNum(vector<int>& arr) {
    int n = arr.size() + 1;
    for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found)
            return i;
    }
    return -1;
}
int main() {
    vector<int> arr = {8, 2, 4, 5, 3, 7, 1}; 
    cout << missingNum(arr) << endl; 
    return 0;
}