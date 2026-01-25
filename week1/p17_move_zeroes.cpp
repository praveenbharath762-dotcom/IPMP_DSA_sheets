#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    for (int lastNonZeroPos = 0, current = 0; current < nums.size(); current++) {
        if (nums[current] != 0) {
            swap(nums[lastNonZeroPos], nums[current]);
            lastNonZeroPos++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    
    cout << "Before: ";
    for (int num : nums) cout << num << " ";
    
    moveZeroes(nums);
    
    cout << "\nAfter: ";
    for (int num : nums) cout << num << " ";
    
    return 0;
}