class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;

        vector<int> dP(n + 1);
        dP[0] = 0;
        dP[1] = 1;

        for (int i = 2; i <= n; i++) {
            dP[i] = dP[i - 1] + dP[i - 2];
        }

        return dP[n];
    }
};