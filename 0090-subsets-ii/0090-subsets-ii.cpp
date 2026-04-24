class Solution {
public:
    void allSubset(vector<int>& nums,vector<int>& ans,int i , vector<vector<int>>& subset){
        sort(nums.begin(),nums.end());
        if(i == nums.size()){
            subset.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        allSubset(nums,ans,i+1,subset);
        ans.pop_back();
        int index = i+1;
        while(index<nums.size() && nums[index] == nums[index -1]){
            index++;
        }
        allSubset(nums,ans,index,subset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>subset;
        vector<int>ans;
        allSubset(nums,ans,0,subset);
        return subset;
    }
};