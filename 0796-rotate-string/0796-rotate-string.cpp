class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int g = goal.length();
        if(n!=g)return false;
        string temp = s+s;
        if(temp.find(goal)!=string::npos){
            return true;
        }return false;
    }
};