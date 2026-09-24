class Solution {
public:

    int count = 0;

    void merge(vector<int>& nums, int low, int mid, int high) {

        // Count reverse pairs
        int j = mid + 1;

        for (int i = low; i <= mid; i++) {

            while (j <= high && nums[i] > 2LL * nums[j]) {
                j++;
            }

            count += j - (mid + 1);
        }

        // Normal merge
        vector<int> temp;

        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {

            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        // Put sorted elements back
        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high) {

        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        mergeSort(nums, low, mid);

        mergeSort(nums, mid + 1, high);

        merge(nums, low, mid, high);
    }

    int reversePairs(vector<int>& nums) {

        count = 0;

        mergeSort(nums, 0, nums.size() - 1);

        return count;
    }
};