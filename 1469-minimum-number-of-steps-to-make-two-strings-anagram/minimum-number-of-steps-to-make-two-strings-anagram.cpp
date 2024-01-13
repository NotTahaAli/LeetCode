class Solution {
public:
    int minSteps(string s, string t) {
        const int maxCount = 'z'-'a'+1;
        int count[maxCount] = {0};
        for (int i = 0; s[i] != 0; i++) {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        int changes = 0;
        for (int i = 0; i < maxCount; i++) {
            if (count[i] > 0) changes += count[i];
        }
        return changes;
    }
};