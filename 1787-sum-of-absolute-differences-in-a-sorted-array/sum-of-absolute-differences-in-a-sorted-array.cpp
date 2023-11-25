class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> out;
        int n = nums.size();
        out.push_back(accumulate(nums.begin(), nums.end(), 0));
        out[0] -= n*nums[0];
        // for (int i=0; i < n; i++) {
        //     out[0] += nums[i]-nums[0];
        // }
        for (int i=1; i < n; i++) {
            out.push_back(out[i-1] + (2*i-n)*(nums[i]-nums[i-1]));
        }
        return out;
    }
};