class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxi = nums[0];
        int curMin = nums[0];
        int curMax = nums[0];

        int n = nums.size();

        for(int i = 1; i < n; i++) {

            int x = nums[i];

            int tempMax = max({x, x * curMax, x * curMin});
            int tempMin = min({x, x * curMax, x * curMin});

            curMin = tempMin;
            curMax = tempMax;

            maxi = max(maxi, curMax);
        }

        return maxi;
    }
};