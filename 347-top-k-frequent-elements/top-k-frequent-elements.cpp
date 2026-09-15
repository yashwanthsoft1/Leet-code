class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> frq;
        vector<pair<int,int>> ans;
        vector<int> result;

        // Count frequency
        for(int num : nums) {
            frq[num]++;
        }

        // Store number + frequency
        for(auto x : frq) {
            ans.push_back({x.first, x.second});
        }

        // Sort by frequency
        sort(ans.begin(), ans.end(),
            [](const pair<int,int>& a, const pair<int,int>& b) {
                return a.second > b.second;
            });

        // Get top k
        for(int i = 0; i < k; i++) {
            result.push_back(ans[i].first);
        }

        return result;
    }
};