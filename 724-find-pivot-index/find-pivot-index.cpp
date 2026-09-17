class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
        vector<int> ans;
        int rightsum=0,leftsum=0;
        
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
            
        }
        for(int i=0;i<n;i++){
            rightsum=totalsum-leftsum-nums[i];
            if(leftsum==rightsum){
                return i;
            }
            leftsum=leftsum+nums[i];
        }
        return -1;
    }

};