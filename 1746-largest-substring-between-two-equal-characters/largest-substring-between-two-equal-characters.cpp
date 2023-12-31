class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxLen = -1;
        const int len = 'z'-'a'+1;
        int firstOccurance[len] = {};
        for (int i = 0; i < len; i++) firstOccurance[i] = -1;
        for (int i = 0; i < s.size(); i++) {
            if (firstOccurance[s[i]-'a'] == -1) firstOccurance[s[i]-'a'] = i;
            else {
                maxLen = max(maxLen, i-firstOccurance[s[i]-'a']-1);
            }
        }
        return maxLen;
    }
};