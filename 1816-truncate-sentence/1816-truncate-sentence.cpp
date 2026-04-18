class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count= 0;
        for(char ch:s){
            if(ch==' '){
                count++;
            }
            if(count==k){
                break;
            }
            ans+=ch;
        }
        return ans;
    }
};