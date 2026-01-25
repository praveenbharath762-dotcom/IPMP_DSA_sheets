#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string convertToTitle(int columnNumber) {
    string result = "";
    
    while (columnNumber > 0) {
        columnNumber--;  
        int remainder = columnNumber % 26;
        char ch = 'A' + remainder;
        result += ch;
        columnNumber /= 26;
    }
    
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int columnNumber = 701;
    cout << convertToTitle(columnNumber) << endl;
    return 0;
}