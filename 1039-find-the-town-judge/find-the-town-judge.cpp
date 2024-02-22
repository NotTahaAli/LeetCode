class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int, pair<int, int>> trusts;
        for (auto t: trust) {
            trusts[t[0]].first++;
            trusts[t[1]].second++;
        }
        for (int i = 1; i <= n; i++) {
            if (trusts[i].first == 0 && trusts[i].second == n-1) return i;
        }
        return -1;
    }
};