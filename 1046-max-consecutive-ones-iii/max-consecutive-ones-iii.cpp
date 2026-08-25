class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int zeros = 0;
        int maxi = 0;
        int n = nums.size();

        while (j < n) {

            // Add nums[j] to the window
            if (nums[j] == 0) {
                zeros++;
            }

            // Too many zeros → shrink
            while (zeros > k) {
                if (nums[i] == 0) {
                    zeros--;
                }

                i++;
            }

            // Valid window
            maxi = max(maxi, j - i + 1);

            j++;
        }

        return maxi;
    }
};