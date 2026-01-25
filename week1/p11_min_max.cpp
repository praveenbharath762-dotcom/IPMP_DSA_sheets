#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> getMinMax(vector<int>& arr, int low, int high) {
    vector<int> result(2);
    
    if (low == high) { 
        result[0] = arr[low];
        result[1] = arr[low];
        return result;
    }
    
    if (high == low + 1) { 
        if (arr[low] < arr[high]) {
            result[0] = arr[low];
            result[1] = arr[high];
        } else {
            result[0] = arr[high];
            result[1] = arr[low];
        }
        return result;
    }
    int mid = (low + high) / 2;
    vector<int> left = getMinMax(arr, low, mid); 
    vector<int> right = getMinMax(arr, mid + 1, high); 
    result[0] = min(left[0], right[0]); 
    
    result[1] = max(left[1], right[1]); 
    
    return result;
}

vector<int> findMinMax(vector<int>& arr) {
    return getMinMax(arr, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {3, 5, 4, 1, 9};
    vector<int> result = findMinMax(arr);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}