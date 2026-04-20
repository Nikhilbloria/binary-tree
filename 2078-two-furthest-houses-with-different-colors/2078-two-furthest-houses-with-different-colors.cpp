class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        // int left = 0;
        // int right = n-1;
        int ans = 0;
        // while(left<right){
        //     if(colors[left]!=colors[right]){
        //         ans = max(ans,abs(left-right));
        //         right--;
        //     }
        //     right--;
        // }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(colors[i]!=colors[j]){
                    ans=max(ans,abs(i-j));
                }
            }
        }
        return ans;
    }
};