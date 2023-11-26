class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int column = matrix[0].size();
        int area = 0;
        vector<int> count;
        for (int i = 0; i < rows; i++) {
            if (i != 0) {
                for (int j = 0; j < column; j++) {
                    if (matrix[i][j] == 1) {
                        matrix[i][j] += matrix[i-1][j];
                    }
                }
            }
            count = matrix[i];
            sort(count.begin(), count.end(), greater());
            for (int i = 0; i < column; i++) {
                if (count[i]*(i+1) > area) {
                    area = count[i]*(i+1);
                }
            }
        }
        return area;
    }
};