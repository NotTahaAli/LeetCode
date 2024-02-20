class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unsigned int neededSum = (nums.size() * (nums.size()+1)) / 2;
        for (auto n: nums) {
            neededSum -= n;
        }
        return neededSum;
    }
};