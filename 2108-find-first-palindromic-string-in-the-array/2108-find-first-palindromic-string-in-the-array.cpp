class Solution {
public:
    bool ispalidrome(string st){
        int left = 0;
        int right = st.size()-1;
        while(left<right){
            if(st[left]!=st[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s:words){
            if(ispalidrome(s)){
                return s;
            }
        }
        return "";
    }
};