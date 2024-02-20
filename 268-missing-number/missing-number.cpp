class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, bool> exists;
        int maxNum = 0;
        for (auto n: nums) {
            exists[n] = true;
            maxNum = max(maxNum,n);
        }
        for (int i = 0; i <= maxNum; i++) {
            if (!exists[i]) return i;
        }
        return maxNum+1;
    }
};