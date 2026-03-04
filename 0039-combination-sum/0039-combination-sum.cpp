// class Solution {
// public:
//     set<vector<int>>s;
//     void getCombination(vector<int>& arr,int i, int tar,vector<vector<int>>&ans,vector<int>&combi){
//         if(i==arr.size()|| tar<0){
//             return;
//         }
//         if(tar==0){
//             if(s.find(combi)==s.end()){
//                 ans.push_back(combi);
//                 s.insert(combi);
//             }
//             return;
//         }
//         combi.push_back(arr[i]);
//         getCombination(arr,i+1,tar-arr[i],ans,combi);
//         getCombination(arr,i,tar-arr[i],ans,combi);
//         combi.pop_back();
//         getCombination(arr,i+1,tar,ans,combi);

//     }
//     vector<vector<int>> combinationSum(vector<int>& arr, int target) {
//         vector<vector<int>>ans;
//         vector<int>combi;
//         getCombination(arr,0,target,ans,combi);
//         return ans;
//     }
// };
class Solution {
public:
    void solve(vector<int>& arr, int target, int index,
               vector<int>& combi, vector<vector<int>>& ans) {
        
        if (target == 0) {
            ans.push_back(combi);
            return;
        }
        
        if (index == arr.size() || target < 0) {
            return;
        }

        // Take current element
        combi.push_back(arr[index]);
        solve(arr, target - arr[index], index, combi, ans);

        // Backtrack
        combi.pop_back();

        // Skip current element
        solve(arr, target, index + 1, combi, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        solve(arr, target, 0, combi, ans);
        return ans;
    }
};