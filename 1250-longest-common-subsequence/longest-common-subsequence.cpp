class Solution {
public:
    int maxLen = 0;

    int longestCommonSubsequence(const string a, const string b) {
        vector<unsigned int> row(b.size(), 0), last(b.size(), 0);
        int iter = 0;
        while (char c = a[iter++]) {
            int i;
            for (i = 0; i < b.size(); i++) {
                if (b[i] == c) {
                    if (i == 0) row[i] = 1;
                    else row[i] = last[i-1]+1;
                } else if (i == 0) row[i] = last[i];
                else row[i] = max(last[i], row[i-1]);
                if (i > 0) last[i-1] = row[i-1];
            }
            last[i-1] = row[i-1];
        }
        return row.back();
    }
};