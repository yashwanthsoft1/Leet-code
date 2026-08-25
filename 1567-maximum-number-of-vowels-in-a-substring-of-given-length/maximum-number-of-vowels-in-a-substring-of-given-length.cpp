class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,maxi=0;
        string vowels="aeiou";
        int count =0;
        int n = s.size();
        while(j<n){
            if(vowels.find(s[j])!=string::npos){
                count++;
            }
            if(j-i+1==k){
                maxi=max(maxi,count);
                if(vowels.find(s[i])!=string::npos){
                count--;
            }

            i++;
            }
            j++;
        }
        return maxi;
    }
};