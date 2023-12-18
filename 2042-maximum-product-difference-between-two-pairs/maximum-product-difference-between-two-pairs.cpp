class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int w = -1;
        int x = -1;
        int y = -1;
        int z = -1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (w == -1 || nums[i] > nums[w]) {
                x = w;
                w = i;
            }
            else if (x == -1 || nums[i] > nums[x]) {
                x = i;
            }

            if (z == -1 || nums[i] < nums[z]) {
                y = z;
                z = i;
            }
            else if (y == -1 || nums[i] < nums[y]) {
                y = i;
            }
        }
        return (nums[w]*nums[x])-(nums[y]*nums[z]);
    }
};