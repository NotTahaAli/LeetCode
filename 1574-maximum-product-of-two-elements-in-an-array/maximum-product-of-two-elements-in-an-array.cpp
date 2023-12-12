class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = (nums[0]-1)*(nums[1]-1);
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i+1; j < size; j++) {
                if ((nums[i]-1)*(nums[j]-1) > max) {
                    max = (nums[i]-1)*(nums[j]-1);
                }
            }
        }
        return max;
    }
};