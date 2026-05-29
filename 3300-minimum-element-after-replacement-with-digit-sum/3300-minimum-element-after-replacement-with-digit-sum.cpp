class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        // vector<int>result;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            int sum = 0;
            int num = nums[i];
            while(num>0){
            int dig = num%10;
            sum += dig;
            num/=10;
            } 
            ans = min(ans,sum);
        }
        
        return ans;
    }
};
