class Solution {
public:
    int firstUniqChar(string s) {
        int count['z'-'a'+1] = {0};
        int strlen = s.size();
        for (auto c: s) {
            count[c-'a']++;
        }
        for (int i = 0; i < strlen; i++) {
            if (count[s[i]-'a'] == 1) return i;
        }
        return -1;
    }
};