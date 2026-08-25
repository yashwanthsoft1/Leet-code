class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int, int> freq;

        int i = 0;
        int j = 0;
        int maxi = 0;
        int n = fruits.size();

        while (j < n) {

            // Add current fruit
            freq[fruits[j]]++;

            // More than 2 different fruit types
            while (freq.size() > 2) {

                freq[fruits[i]]--;

                if (freq[fruits[i]] == 0) {
                    freq.erase(fruits[i]);
                }

                i++;
            }

            // Valid window
            maxi = max(maxi, j - i + 1);

            j++;
        }

        return maxi;
    }
};