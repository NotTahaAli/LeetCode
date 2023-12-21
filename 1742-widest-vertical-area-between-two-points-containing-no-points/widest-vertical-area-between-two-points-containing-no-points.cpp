class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(), points.end());
        int maxDiff = points[1][0] - points[0][0];
        for (int i = 2; i < n; i++) {
            maxDiff = max(maxDiff, points[i][0]-points[i-1][0]);
        }
        return maxDiff;
    }
};