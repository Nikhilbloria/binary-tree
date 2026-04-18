class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>setA(nums1.begin(),nums1.end());
        unordered_set<int>setB(nums2.begin(),nums2.end());
        vector<int>res1,res2;
        for(int x1:setA){
            if(setB.find(x1)==setB.end()){
                res1.push_back(x1);
            }
        }
        for(int x2:setB){
            if(setA.find(x2)==setA.end()){
                res2.push_back(x2);
            }
        }
        return {res1,res2};
    }
};