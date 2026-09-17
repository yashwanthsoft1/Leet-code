class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        vector<int> ans;
        int highest=0;
        int n=gain.size();
        for(int i=0;i<n;i++){
            sum+=gain[i];
            ans.push_back(sum);
            highest=max(sum,highest);
        }
        
        return highest;
    }
};