#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int titleToNumber(string columnTitle) {
    int result = 0;
    
    for (char c : columnTitle) {
        int value = c - 'A' + 1;  // Convert A->1, B->2, ..., Z->26
        result = result * 26 + value;
    }
    
    return result;
}

int main() {
    
    string test = "FXSHRXW"; 
    cout << "Input: " << test << endl;
    cout << "Output: " << titleToNumber(test) << endl;
    
    return 0;
}