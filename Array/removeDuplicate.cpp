#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int>& nums) {   // pass by reference
    if (nums.size() == 0)
        return 0;

    int i = 0;

    for (int j = 1; j < nums.size(); j++) { // start from 1
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main() {
    vector<int> nums = {1,1,1,2,2,2,3,3,4,4,5,5,6,6,6,6};

    int k = removeDuplicate(nums);

    cout << "k = " << k << endl;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
