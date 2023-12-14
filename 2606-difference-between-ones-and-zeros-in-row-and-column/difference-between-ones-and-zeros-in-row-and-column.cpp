class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rows;
        vector<int> columns;
        vector<vector<int>> output;
        rows.resize(m);
        columns.resize(n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rows[i] += grid[i][j];
                columns[j] += grid[i][j];
            }
        }
        for (int i = 0; i < m; i++) {
            vector<int> row;
            for (int j = 0; j < n; j++) {
                row.push_back(rows[i]+columns[j]-(m-rows[i])-(n-columns[j]));
            }
            output.push_back(row);
        }
        return output;
    }
};