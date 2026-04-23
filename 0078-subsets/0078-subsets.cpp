class Solution {
public:
    void printSub(vector<vector<int>>&ans,vector<int>&temp,vector<int>&nums,int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        printSub(ans, temp, nums, i+1); 

        temp.pop_back();//backtracking
        printSub(ans,temp,nums,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        printSub(ans,temp,nums,0);
        return ans;
    }
};