class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;

        int i = 0, j = 0;
        int maxi = 0;
        int n = s.size();

        while (j < n) {

            // Shrink while duplicate exists
            while (seen.find(s[j]) != seen.end()) {
                seen.erase(s[i]);
                i++;
            }

            // Add current character
            seen.insert(s[j]);

            // Current window length
            maxi = max(maxi, (int)seen.size());

            j++;
        }

        return maxi;
    }
};