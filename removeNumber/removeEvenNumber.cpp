// Given an integer array nums,
// remove all even numbers in-place.
// Return the count of odd numbers.




#include <iostream>
#include <vector>
using namespace std;


int removeEvenNumber(vector<int>& nums) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 != 0) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int  main(){
    vector<int> nums = {0,1,2,3,4,5,6,7,8,9};
    int k = removeEvenNumber(nums);
    cout << "The new length is: " << k << endl;
    cout << "The modified array is: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}