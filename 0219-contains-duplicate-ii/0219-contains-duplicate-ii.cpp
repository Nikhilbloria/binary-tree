// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int n = nums.size();
//         unordered_map<int,int>mp;
//         for(int i=0;i<n;i++){
//             if(mp.find(nums[i])!=mp.end() &&
//             abs(mp[nums[i]]-i)<=k){
//                 return true;
//             }else{
//                 mp[nums[i]] = i;
//             }
//         }return false;
//     }
// };
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {
            
            // Step 1: Check duplicate
            if(st.find(nums[i]) != st.end()) {
                return true;
            }

            // Step 2: Insert current element
            st.insert(nums[i]);

            // Step 3: Maintain window size k
            if(st.size() > k) {
                st.erase(nums[i - k]);
            }
        }

        return false;
    }
};