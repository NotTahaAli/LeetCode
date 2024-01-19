class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int temp;
        for(int i = 1; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                int temp = matrix[i][j];
                matrix[i][j] = temp + matrix[i-1][j];
                if (j > 0) {
                    matrix[i][j] = min(matrix[i][j], temp + matrix[i-1][j-1]);
                }
                if (j < matrix.size() - 1) {
                    matrix[i][j] = min(matrix[i][j], temp + matrix[i-1][j+1]);
                }
            }
        }
        int minSum = matrix[matrix.size()-1][0];
        for (int j = 1; j < matrix[0].size(); j++) {
            minSum = min(minSum, matrix[matrix.size()-1][j]);
        }
        return minSum;
    }
};