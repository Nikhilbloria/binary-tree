class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<int>st;
        for(int i=0;i<n;i++){
            char ch = s[i];//when we have to compare top to next element 
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }else{
                if(st.empty())return false;
                char top = st.top();
                st.pop();
                if((ch == ')'&& top!='(') ||
                (ch=='}'&&top!='{')||
                (ch==']'&&top!='[')){
                    return false;
                }
            }
        }return st.empty();
    }
};