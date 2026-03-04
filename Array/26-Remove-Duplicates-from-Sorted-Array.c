/*
Problem: 26. Remove Duplicates from Sorted Array
Difficulty: Easy
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/

int removeDuplicates(int* nums, int numsSize) {

    int i = 0;   // pointer to last unique element

    for(int j = 1; j < numsSize; j++) {
        if(nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}