#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> findUnion(int arr1[], int n, int arr2[], int m) {
    vector<int> result;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        while (i > 0 && i < n && arr1[i] == arr1[i-1]) i++;
        while (j > 0 && j < m && arr2[j] == arr2[j-1]) j++;
        
        if (i >= n || j >= m) break;
        
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            result.push_back(arr2[j]);
            j++;
        }
        else {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i-1]) {
            result.push_back(arr1[i]);
        }
        i++;
    }
    
    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j-1]) {
            result.push_back(arr2[j]);
        }
        j++;
    }
    
    return result;
}

vector<int> findIntersection(int arr1[], int n, int arr2[], int m) {
    vector<int> result;
    int i = 0, j = 0;
    
    while (i < n && j < m) {
        while (i > 0 && i < n && arr1[i] == arr1[i-1]) i++;
        while (j > 0 && j < m && arr2[j] == arr2[j-1]) j++;
        
        if (i >= n || j >= m) break;
        
        if (arr1[i] < arr2[j]) {
            i++;
        }
        else if (arr1[i] > arr2[j]) {
            j++;
        }
        else {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    return result;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 4, 6, 7, 8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    vector<int> unionResult = findUnion(arr1, n, arr2, m);
    vector<int> intersectionResult = findIntersection(arr1, n, arr2, m);
    
    cout << "Union: ";
    for (int num : unionResult) cout << num << " ";
    cout << endl;
    
    cout << "Intersection: ";
    for (int num : intersectionResult) cout << num << " ";
    cout << endl;
    
    return 0;
}