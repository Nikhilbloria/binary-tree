class Solution {
public:
    void totalSubsets(vector<int> &nums,vector<int> &ans,int i,vector<vector<int>> &allSubset){
        if(i == nums.size()){
            allSubset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        totalSubsets(nums,ans,i+1,allSubset);
        ans.pop_back();
        totalSubsets(nums,ans,i+1,allSubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubset;
        vector<int>ans;
        totalSubsets(nums,ans,0,allSubset);
        //arguments that are passed should be in proper order at every place
        return allSubset;
    }
};