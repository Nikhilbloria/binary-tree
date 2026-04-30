class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int minus = target-nums[i];
            if(mp.find(minus)!=mp.end()){
                return {mp[minus],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};