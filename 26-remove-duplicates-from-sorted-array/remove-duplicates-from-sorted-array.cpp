class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int l=0;
      int n=nums.size();
      int r=l+1;
      
      while(r<n){
        if(nums[l]!=nums[r]){
            l++;
            nums[l]=nums[r];
        }
        
        r++;
      }
      return l+1;

    }
};