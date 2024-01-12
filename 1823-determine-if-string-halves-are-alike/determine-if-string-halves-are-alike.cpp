class Solution {
public:
    bool isVowel(char c) {
        return (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U');
    }
    bool halvesAreAlike(string s) {
        unsigned int diff = 0;
        for (int i = 0; s[i] != 0; i++) {
            if (isVowel(s[i])) {
                if (i < s.size()/2) {
                    diff++;
                }
                else {
                    diff--;
                }
            }
        }
        return diff == 0;
    }
};