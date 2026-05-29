class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>result;
        for(int i=0;i<n;i++){
            int sum = 0;
            int num = nums[i];
            while(num>0){
            int dig = num%10;
            sum += dig;
            num/=10;
            } 
            result.push_back(sum);
        }
        sort(result.begin(),result.end());
        return result[0];
    }
};
