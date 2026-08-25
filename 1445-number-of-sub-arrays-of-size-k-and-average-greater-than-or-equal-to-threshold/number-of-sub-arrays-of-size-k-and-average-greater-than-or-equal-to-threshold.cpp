class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int result=0;
        int avg=0;
        int sum=0;
        int i=0,j=0;
        int n=arr.size();
        while(j<n){
    sum += arr[j];

    if(j-i+1 == k){
        avg = sum/k;

        if(avg >= threshold){
            result++;
        }

        sum -= arr[i];
        i++;
    }

    j++;
}
        return result;
    }
};