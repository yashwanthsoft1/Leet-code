class Solution {
public:
    bool possible(vector<int>& bloomDay, int mid,int m, int k){
        int cnt=0;
        int noB=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }else{
                noB+=(cnt/k);
                cnt=0;
            }
        }
        noB+=(cnt/k);
        return noB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val=m*1LL*k*1LL;
        if(val>bloomDay.size()){
            return -1;
        }
       int low=*min_element(bloomDay.begin(),bloomDay.end()) ;
       int high=*max_element(bloomDay.begin(),bloomDay.end()) ;

       while(low<=high){
        int mid=(low+high)/2;
        if(possible( bloomDay,  mid, m,  k)){
            high=mid-1;
        }else{
            low=mid+1;
        }
       }
       return low;
    }
};