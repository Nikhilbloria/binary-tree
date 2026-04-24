class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0;
        int r = 0;
        int u = 0;
        for(char ch:moves){
            if(ch == 'L')l++;
            else if(ch == 'R')r++;
            else u++;
        }
        return abs(l-r)+u;
    }
};