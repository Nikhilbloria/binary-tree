class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        vector<int>ans;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                ans.push_back(i);
            }
        }
        if(ans.size()!=2){
            return false;
        }
        swap(s1[ans[0]],s1[ans[1]]);
        return s1==s2;
    }
};