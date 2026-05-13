class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        for(char x:s){
            if(!st.empty()&& st.top().first==x){
                st.top().second++;
            }else{
                st.push({x,1});
            }
            if(st.top().second==k){
                st.pop();
            }
        }
        string ans = "";
     while(!st.empty()) {
            char ch = st.top().first;
            int count = st.top().second;
            st.pop();

            while(count--) {   //print char map with its freq;
                ans += ch;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};