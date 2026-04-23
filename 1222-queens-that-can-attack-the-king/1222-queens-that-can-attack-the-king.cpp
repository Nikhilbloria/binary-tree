class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        bool board[8][8] = {};
        for(int k = 0; k < queens.size(); ++k) board[queens[k][0]][queens[k][1]] = true;
        vector<vector<int>> res;
        int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
        int dy[8] = {-1,  0,  1, 1, 1, 0, -1, -1};
        int x = king[0], y = king[1];
        for (int d = 0; d < 8; ++d) {
            int i = x + dx[d], j = y + dy[d];
            while (i >= 0 && i < 8 && j >= 0 && j < 8) {
                if (board[i][j]) {
                    res.push_back({i, j});
                    break;
                }
                i += dx[d]; j += dy[d];
            }
        }
        return res;
    }
};