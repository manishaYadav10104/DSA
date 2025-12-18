#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0; // Pointer for the next position of a valid element

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i]; // Place the element at the next position
        }
    }

    return k; // Return the count of elements not equal to val
}

int main() {
    vector<int> nums = {3, 2, 2, 3, 4, 2, 5};
    int val = 2;

    int result = removeElement(nums, val);

    cout << "Number of elements not equal to " << val << ": " << result << endl;
    cout << "Modified array: ";
    for (int i = 0; i < result; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

