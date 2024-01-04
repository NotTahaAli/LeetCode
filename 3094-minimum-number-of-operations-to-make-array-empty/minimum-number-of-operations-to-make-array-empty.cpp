class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> counts;
        int changes = 0;
        for (auto i: nums) {
            counts[i]++;
        }
        for (auto i: counts) {
            if (i.second == 1) return -1;
            changes += (i.second+2)/3;
        }
        return changes;
    }
};