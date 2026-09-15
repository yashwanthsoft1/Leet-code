class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        int ans=0;
        for(int num:nums){
            freq[num]++;
        }

        for(int num:nums){
            if(freq[num]>n/2){
                ans=num;
            }
        }
        return ans;
    }
};