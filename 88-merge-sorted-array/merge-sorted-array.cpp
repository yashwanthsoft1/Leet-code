class Solution {
private:
    void swapIfGreater(int &a, int &b) {
        if (a > b) swap(a, b);
    }

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {

                // Case 1: both pointers in nums1
                if (left < m && right < m) {
                    swapIfGreater(nums1[left], nums1[right]);
                }
                // Case 2: left in nums1, right in nums2
                else if (left < m && right >= m) {
                    swapIfGreater(nums1[left], nums2[right - m]);
                }
                // Case 3: both in nums2
                else {
                    swapIfGreater(nums2[left - m], nums2[right - m]);
                }

                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

     
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};
