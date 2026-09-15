class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        int ans=0;
        for(int num:nums){
            freq[num]++;
            
        }
        for(int num:nums){
            if(freq[num]==1){
                ans= num;
            }
        }
        return ans;
    }
};