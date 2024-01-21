class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> maximum(nums.size());
        maximum[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            maximum[i] = nums[i];
            if (i >= 2) {
                maximum[i] += max(maximum[i-2], maximum[max(i-3,0)]);
            }
            cout << maximum[i] << endl;
        }
        return max(maximum[nums.size()-1], maximum[max((int) nums.size()-2,0)]);
    }
};