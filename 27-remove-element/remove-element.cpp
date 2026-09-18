class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=0,r=0;
        int n=nums.size()-1;
        while(r<=n){
            if(nums[r]!=val){
                nums[l]=nums[r];
                l++;
            }
            r++;
        }
        return l;
    }
};