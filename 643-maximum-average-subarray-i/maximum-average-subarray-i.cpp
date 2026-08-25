class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        double sum , avg=0;
        double maxi=INT_MIN;
        int n=nums.size();
        if(n==1){
            return nums[0];
        }

        while(j<n){
            sum+=nums[j];
            if(j-i+1==k){
                avg=sum/k;
                maxi=max(avg,maxi);
                sum -=nums[i];
                i++;
            }
            j++;
        }
        return maxi;
    }
};