class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());

        int l = 0;
        int r = nums.size() - 1;
        int pos = nums.size() - 1;

        while (l <= r) {
            int sqr1 = nums[l] * nums[l];
            int sqr2 = nums[r] * nums[r];

            if (sqr2 > sqr1) {
                ans[pos] = sqr2;
                r--;
            } else {
                ans[pos] = sqr1;
                l++;
            }

            pos--;
        }

        return ans;
    }
};