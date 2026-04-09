#include <bits/stdc++.h>
using namespace std;

int threeSumSmaller(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int count = 0;

    for(int i = 0; i < n - 2; i++) {
        int left = i + 1, right = n - 1;

        while(left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if(sum < target) {
                count += (right - left);
                left++;
            } else {
                right--;
            }
        }
    }

    return count;
}