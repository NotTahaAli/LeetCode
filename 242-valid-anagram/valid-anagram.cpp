class Solution {
public:
    bool isAnagram(string s, string t) {
        const int totalChars = 'z'-'a'+1;
        int charCount[totalChars] = {0};
        if (t.size() != s.size()) return false;
        int i;
        int size = t.size();
        for (i = 0; i < size; i++) {
            charCount[s[i]-'a']++;
            charCount[t[i]-'a']--;
        }
        for (i = 0; i < totalChars; i++) {
            if (charCount[i] != 0) return false;
        }
        return true;
    }
};