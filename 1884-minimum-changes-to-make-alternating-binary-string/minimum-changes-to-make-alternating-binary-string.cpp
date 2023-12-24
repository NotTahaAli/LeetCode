class Solution {
public:
    int minOperations(string s) {
        int minChanges = INT_MAX;
        int changes = 0;
        bool lastChanged = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                changes++;
                if (i > 1 && s[i-1] != s[i-2]) {
                    changes = INT_MAX;
                    break;
                }
            }
        }
        minChanges = min(changes, minChanges);
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i-1]) continue;
            changes = 0;
            lastChanged = true;
            for (int j = i-1; j >= 0; j--) {
                if ((!lastChanged && s[j] == s[j+1]) || (lastChanged && s[j] != s[j+1])) {
                    changes++;
                    lastChanged = true;
                } else {
                    lastChanged = false;
                }
            }
            lastChanged = false;
            for (int j = i; j < s.size(); j++) {
                if ((!lastChanged && s[j] == s[j-1]) || (lastChanged && s[j] != s[j-1])) {
                    changes++;
                    lastChanged = true;
                } else {
                    lastChanged = false;
                }
            }
            minChanges = min(changes, minChanges);
        }
        minChanges = min(changes, minChanges);
        return minChanges;
    }
};