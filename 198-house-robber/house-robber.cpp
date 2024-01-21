class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int prev2 = 0;
        int prev1 = nums[0];
        int prev = nums[1];
        int temp;
        for (int i = 2; i < nums.size(); i++) {
            temp = max(prev1, prev2) + nums[i];
            prev2 = prev1;
            prev1 = prev;
            prev = temp;
        }
        return max(prev, prev1);
    }
};