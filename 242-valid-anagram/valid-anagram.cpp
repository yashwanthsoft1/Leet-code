class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq;

        for(char a:s){
            freq[a]++;
        }

        for(char a:t){
            freq[a]--;
        }

        for(auto x:freq){
            if(x.second!=0){
                return false;
            }
        }
        return true;
        
    }
};