class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int left = 0;
        int ans = 1;

        for (int right = 1; right < nums.size(); right++) {

            if (nums[right] <= nums[right - 1]) {
                left = right;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};