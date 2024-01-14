class Solution {
public:
    bool closeStrings(string word1, string word2) {
        const uint8_t chars = 'z'-'a'+1;
        int c1[chars] = {0};
        int c2[chars] = {0};
        bool done[chars] = {false};
        for(int i = 0; word1[i] != 0 || word2[i] != 0; i++) {
            if (word1[i] == 0 || word2[i] == 0) return false;
            c1[word1[i]-'a']++;
            c2[word2[i]-'a']++;
        }
        for(int i = 0; i < chars; i++) {
            if (c1[i] == 0 && c2[i] != 0) return false;
            if (c2[i] == 0 && c1[i] != 0) return false;
            bool match = false;
            for (int j = 0; j < chars; j++) {
                if (c1[i] == c2[j] && !done[j]) {
                    done[j] = true;
                    match = true;
                    break;
                }
            }
            if (!match) return false;
        }
        return true;
    }
};