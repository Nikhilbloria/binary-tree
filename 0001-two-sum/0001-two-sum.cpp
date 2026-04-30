class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int minus = target - nums[i];
            if(mp.find(minus)!=mp.end()){
                return {mp[minus],i};
            }
            mp[nums[i]]=i;
        }
        return{};
    }
};