class Solution {
public:
    int minOperations(string s) {
        int changes = 0;
        int next = 1;
        int strlen = s.size();
        for (int i = 0; i < strlen; i++) {
            if (s[i]-'0' != next) {
                changes++;
            }
            next = !next;
        }
        changes = min(changes, strlen-changes);
        return changes;
    }
};