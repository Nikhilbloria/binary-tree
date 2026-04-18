class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>setA(nums1.begin(),nums1.end());
        unordered_set<int>result;
        for(int x: nums2){
            if(setA.find(x)!=setA.end()){
                result.insert(x);
            }
        }
        vector<int>ans;
        for(int x:result){
            ans.push_back(x);
        }
        return ans;
    }
};