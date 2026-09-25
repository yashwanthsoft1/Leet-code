class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        vector<int> ans;
        int n = prices.size();

        for(int i = 0; i < n; i++) {

            bool found = false;

            for(int j = i + 1; j < n; j++) {

                if(prices[j] <= prices[i]) {

                    int s = prices[i] - prices[j];
                    ans.push_back(s);

                    found = true;
                    break;
                }
            }

            if(!found) {
                ans.push_back(prices[i]);
            }
        }

        return ans;
    }
};