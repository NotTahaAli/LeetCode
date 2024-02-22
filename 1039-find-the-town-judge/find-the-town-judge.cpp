class Solution {
public:
    int findJudge(const int n, vector<vector<int>>& trust) {
        vector<int> trusts(n,0);

        for (auto t: trust) {
            trusts[t[0]-1]--;
            trusts[t[1]-1]++;
        }
        for (int i = 0; i < n; i++) {
            if (trusts[i] == n-1) return i+1;
        }
        return -1;
    }
};