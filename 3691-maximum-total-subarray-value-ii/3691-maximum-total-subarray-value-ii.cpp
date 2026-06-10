class Solution {
public:
    vector<vector<int>> mn, mx;
    vector<int> lg;

    int getMin(int l, int r) {
        int len = r - l + 1;
        int k = lg[len];
        return min(mn[k][l], mn[k][r - (1 << k) + 1]);
    }

    int getMax(int l, int r) {
        int len = r - l + 1;
        int k = lg[len];
        return max(mx[k][l], mx[k][r - (1 << k) + 1]);
    }

    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();

        lg.assign(n + 1, 0);
        for (int i = 2; i <= n; i++) {
            lg[i] = lg[i / 2] + 1;
        }

        int K = lg[n] + 1;
        mn.assign(K, vector<int>(n));
        mx.assign(K, vector<int>(n));

        for (int i = 0; i < n; i++) {
            mn[0][i] = nums[i];
            mx[0][i] = nums[i];
        }

        for (int level = 1; level < K; level++) {
            for (int i = 0; i + (1 << level) <= n; i++) {
                mn[level][i] = min(mn[level - 1][i],
                                   mn[level - 1][i + (1 << (level - 1))]);

                mx[level][i] = max(mx[level - 1][i],
                                   mx[level - 1][i + (1 << (level - 1))]);
            }
        }

        priority_queue<pair<long long, pair<int, int>>> pq;

        for (int i = 0; i < n; i++) {
            long long val = getMax(i, n - 1) - getMin(i, n - 1);
            pq.push({val, {i, n - 1}});
        }

        long long ans = 0;

        while (k--) {
            auto top = pq.top();
            pq.pop();

            long long val = top.first;
            int l = top.second.first;
            int r = top.second.second;

            ans += val;

            if (l < r) {
                r--;

                long long newVal = getMax(l, r) - getMin(l, r);
                pq.push({newVal, {l, r}});
            }
        }

        return ans;
    }
};