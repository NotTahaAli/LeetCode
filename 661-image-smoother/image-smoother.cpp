class Solution {
public:
    int calculateCell(vector<vector<int>>& img, int i, int j, int m, int n) {
        int vals = 0;
        int total = 0;
        for (int x = -1; x <= 1; x++) {
            for (int y = -1; y <= 1; y++) {
                if (i+x >= m || i + x < 0 || j+y >= n || j+y < 0) continue;
                vals++;
                total += img[i+x][j+y];
            }
        }
        total /= vals;
        return total;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> newimg;
        int m = img.size();
        int n = img[0].size();
        for (int i = 0; i < m; i++) {
            vector<int> row;
            for (int j = 0; j < n; j++) {
                row.push_back(calculateCell(img,i,j,m,n));
            }
            newimg.push_back(row);
        }
        return newimg;
    }
};