class Solution {
public:
    bool checkString(string s) {
       int n = s.length();
       int count = 0;
       for(int i=0;i<n;i++){
        if(s[i]>s[i+1]){
            count++;
        }
       } 
       return count<=1;
    }
};