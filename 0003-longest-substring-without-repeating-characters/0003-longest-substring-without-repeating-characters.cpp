class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int n = s.length();
        int maxi = 0;
        unordered_set<char>st;
        for(int right = 0;right<n;right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxi = max(maxi,right-left+1);
        }
        return maxi;
    }
};
// unordered_map<char, int> mp;
// int left = 0, maxi = 0;

// for(int right = 0; right < s.size(); right++) {

//     if(mp.find(s[right]) != mp.end()) {
//         left = max(left, mp[s[right]] + 1);
//     }

//     mp[s[right]] = right;

//     maxi = max(maxi, right - left + 1);
// }
