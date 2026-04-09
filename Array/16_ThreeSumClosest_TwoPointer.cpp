/*
LeetCode Problem: 16. 3Sum Closest
Link: https://leetcode.com/problems/3sum-closest/

Approach:
- Sort the array
- Fix one element and use two pointers
- Track the closest sum to target

Time Complexity: O(n^2)
Space Complexity: O(1)

*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int closestSum = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(abs(target - sum) < abs(target - closestSum)) {
                    closestSum = sum;
                }

                if(sum < target) left++;
                else if(sum > target) right--;
                else return sum;
            }
        }

        return closestSum;
    }
};