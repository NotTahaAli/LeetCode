class Solution {
public:
    bool makeEqual(vector<string>& words) {
        const int totalLetters = 'z'-'a'+1;
        int letters[totalLetters] = {};
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                letters[words[i][j]-'a']++;
            }
        }
        for (int i = 0; i < totalLetters; i++) {
            if (letters[i] % words.size() != 0) return false;
        }
        return true;
    }
};