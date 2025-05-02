class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        int minr = 0;
        int minc = 0;
        int maxr = matrix.size() - 1;
        int maxc = matrix[0].size() - 1;
        while (minr <= maxr && minc <= maxc) {
            // Right
            for (int j = minc; j <= maxc; j++) {
                res.push_back(matrix[minr][j]);
            }
            minr++;
            // Down
            for (int i = minr; i <= maxr; i++) {
                res.push_back(matrix[i][maxc]);
            }
            maxc--;
            // Left (check again to avoid duplication)
            if (minr <= maxr) {
                for (int j = maxc; j >= minc; j--) {
                    res.push_back(matrix[maxr][j]);
                }
                maxr--;
            }
            // Up (check again)
            if (minc <= maxc) {
                for (int i = maxr; i >= minr; i--) {
                    res.push_back(matrix[i][minc]);
                }
                minc++;
            }
        }
        return res;
    }
};
