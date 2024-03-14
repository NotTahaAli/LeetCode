class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        for (int right = 0, sum = 0; right < nums.size(); right++) {
            sum += nums[right];
            int currSum = sum;
            for (int left = 0, currSum = sum; left <= right; left++) {
                if (currSum == goal) {
                    count++;
                }
                if (currSum < goal) break;
                currSum -= nums[left];
            }
        }
        return count;
    }
};