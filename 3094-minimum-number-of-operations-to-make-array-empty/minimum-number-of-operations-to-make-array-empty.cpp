class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 1;
        int changes = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] == nums[i]) {
                count++;
            } else {
                while (count >= 5) {
                    changes++;
                    count -= 3;
                }
                if (count % 3 != 1) {
                    changes += count / 3;
                    count %= 3;
                }
                changes += count / 2;
                count %= 2;
                if (count != 0) return -1;
                count = 1;
            }
        }
        while (count >= 5) {
            changes++;
            count -= 3;
        }
        if (count%3 != 1) {
            changes += count / 3;
            count %= 3;
        }
        changes += count / 2;
        count %= 2;
        if (count != 0) return -1;
        return changes;
    }
};