class Solution {
public:
    int findJudge(const int n, vector<vector<int>>& trust) {
        vector<pair<bool, int>> trusts(n,{0,0});

        for (auto t: trust) {
            trusts[t[0]-1].first = true;
            trusts[t[1]-1].second++;
        }
        for (int i = 0; i < n; i++) {
            if (trusts[i].first == false && trusts[i].second == n-1) return i+1;
        }
        return -1;
    }
};