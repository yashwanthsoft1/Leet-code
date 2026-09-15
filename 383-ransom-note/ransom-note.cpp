class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char ,int> freq;
        for(char s:magazine){
            freq[s]++;
        }
        for(char s:ransomNote){
            freq[s]--;
        }
        for(auto x:freq){
            if(x.second<0){
                return false;
            }
        }
        return true;
    }
};