class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;
        int maxi = 0;
        while(low<high){
            int length = min(height[low],height[high]);
            int breadth = abs(high -low);
            int area = length * breadth;
            maxi = max(maxi,area);
            if(height[low]<height[high]){
                low++;
            }else{
                high--;
            }
        }
        return maxi;
    }
};