class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> out;
        for (int i = 0; i < n; i++) {
            vector<int> row;
            for (int j = 0; j < m; j++) {
                row.push_back(matrix[j][i]);
            }
            out.push_back(row);
        }
        return out;
    }
};