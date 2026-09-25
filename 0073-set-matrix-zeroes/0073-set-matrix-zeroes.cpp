class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<bool> zeroRows(n, false), zeroCols(m, false);
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (matrix[i][j] == 0) {
                    zeroRows[i] = true;
                    zeroCols[j] = true;
                }
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (zeroRows[i] || zeroCols[j])
                    matrix[i][j] = 0;
    }
};