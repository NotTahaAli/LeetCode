class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> newimg;
        int m = img.size();
        int n = img[0].size();
        int vals = 0;
        int total = 0;
        for (int i = 0; i < m; i++) {
            vector<int> row;
            for (int j = 0; j < n; j++) {
                vals = 0;
                total = 0;
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        if (i+x >= m || i + x < 0 || j+y >= n || j+y < 0) continue;
                        vals++;
                        total += img[i+x][j+y];
                    }
                }
                row.push_back(total / vals);
            }
            newimg.push_back(row);
        }
        return newimg;
    }
};