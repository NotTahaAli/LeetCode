class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        for (int left = 0, right = 0, sum = 0; right < nums.size(); right++) {
            sum += nums[right];
            for (int i = left, currSum = sum; i <= right; i++) {
                if (currSum == goal) {
                    count++;
                }
                if (currSum < goal) break;
                currSum -= nums[i];
            }
            while (right > left && (sum > goal || right == nums.size() - 1)) {
                sum -= nums[left];
                left++;
            }
        }
        return count;
    }
};