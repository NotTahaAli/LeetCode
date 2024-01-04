class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> counts;
        int changes = 0;
        for (int i = 0; i < nums.size(); i++) {
            counts[nums[i]]++;
        }
        for (auto i: counts) {
            while (i.second >= 5) {
                changes++;
                i.second -= 3;
            }
            if (i.second%3 != 1) {
                changes += i.second / 3;
                i.second %= 3;
            }
            changes += i.second / 2;
            i.second %= 2;
            if (i.second != 0) return -1;
        }
        return changes;
    }
};