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
        int diff = 0;
        int n = s.size()/2;
        for (int i = 0; s[i] != 0; i++) {
            if (isVowel(s[i])) {
                if (i < n) {
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