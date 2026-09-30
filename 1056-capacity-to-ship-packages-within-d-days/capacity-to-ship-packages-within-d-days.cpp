#include <bits/stdc++.h>
class Solution {
public:
    int nodays(vector<int>& weights, int mid,int days){
        int day=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+load<=mid){
                load+=weights[i];
            }else{
                day+=1;
                load=weights[i];
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
            int low=*max_element(weights.begin(),weights.end());
            int high=accumulate(weights.begin(),weights.end(),0);
            while(low<=high){
                int mid=(low+high)/2;
                if(nodays( weights,  mid, days)<=days){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
            return low;
    }
};