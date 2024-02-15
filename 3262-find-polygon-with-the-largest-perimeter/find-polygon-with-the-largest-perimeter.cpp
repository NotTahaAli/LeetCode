class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int j = nums.size()-1; j >= 2; j--){
            unsigned long long int sum = 0;
            for (int i = 0; i < j; i++) {
                sum += nums[i];
            }
            if (nums[j] < sum) {
                return sum + nums[j];
            }
        }
        return -1;
    }
};