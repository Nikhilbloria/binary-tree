class Solution {
public:
    int mirrorDistance(int n) {
        int a  = n;
        int reversed = 0;
        while(n > 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
        }
        int ans = abs(a-reversed);
        return ans;
    }
};