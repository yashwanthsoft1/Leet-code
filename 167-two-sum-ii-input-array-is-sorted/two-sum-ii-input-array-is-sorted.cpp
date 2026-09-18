class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int n=numbers.size()-1;
        int j = n;
        int sum=0;
        vector<int> ans;
        while(i<j){
            sum=numbers[i]+numbers[j];
            if(sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1); 
                return ans;

            }
            if(sum>target){
                j--;
                sum=0;
            }else{
                i++;
                sum=0;
            }
        }
        return ans;
    }
};