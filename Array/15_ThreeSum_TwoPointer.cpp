/*
LeetCode Problem: 15. 3Sum
Link: https://leetcode.com/problems/3sum/
Approach:
- Sort the array
- Fix one element and use two pointers (left & right)
- Avoid duplicates
Time Complexity: O(n^2)
Space Complexity: O(1) (excluding result)
*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2; i++) {
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }
                else if(sum < 0) left++;
                else right--;
            }
        }
        return ans;
    }
};
