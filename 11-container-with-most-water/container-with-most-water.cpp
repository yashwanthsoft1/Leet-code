class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxArea=0;
        while(l<=r){
            int width=r-l;
            int area=width*min(height[l],height[r]);
            maxArea=max(maxArea,area);
            if(height[l]<height[r]){
                l++;
            }else{
                r--;
            }

           
        }
        return maxArea;
    }
};