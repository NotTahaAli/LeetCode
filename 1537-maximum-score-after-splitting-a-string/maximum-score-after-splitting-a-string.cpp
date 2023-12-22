class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int score = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') score++;
        }
        int maxscore = 0;
        for (int i = 0; i < n-1; i++) {
            if (s[i] == '1') score--;
            else score++;
            maxscore = max(score,maxscore);
        }
        return maxscore;
    }
};