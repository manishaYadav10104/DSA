// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.



#include <iostream>
#include <vector>
using namespace std;    
int removeElementVal(vector<int>& nums, int val) {
    int k = 0; 

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i]; 
        }
    }

    return k; 
}       
int main() {
    vector<int> nums = {3, 2, 2, 3, 4, 2, 5};
    int val = 2;

    int result = removeElementVal(nums, val);

    cout << "Number of elements not equal to " << val << ": " << result << endl;
    cout << "Modified array: ";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}