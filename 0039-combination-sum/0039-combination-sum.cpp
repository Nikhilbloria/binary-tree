class Solution {
public:
    set<vector<int>>s;
    void getCombination(vector<int>& arr,int i, int tar,vector<vector<int>>&ans,vector<int>&combi){
        if(i==arr.size()|| tar<0){
            return;
        }
        if(tar==0){
            if(s.find(combi)==s.end()){
                ans.push_back(combi);
                s.insert(combi);
            }
            return;
        }
        combi.push_back(arr[i]);
        getCombination(arr,i+1,tar-arr[i],ans,combi);
        getCombination(arr,i,tar-arr[i],ans,combi);
        combi.pop_back();
        getCombination(arr,i+1,tar,ans,combi);

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>combi;
        getCombination(arr,0,target,ans,combi);
        return ans;
    }
};