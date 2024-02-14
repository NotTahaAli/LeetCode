class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> out;
        int lastPos = -1;
        int lastNeg = -1;
        for (int pos = 0; pos < nums.size(); pos++) {
            for (int j = ((pos % 2 == 0) ? lastPos : lastNeg) + 1; j < nums.size(); j++) {
                if ((pos % 2 == 0 && nums[j] > 0) || (pos % 2 != 0 && nums[j] < 0)) {
                    if (nums[j] > 0) {
                        lastPos = j;
                    } else {
                        lastNeg = j;
                    }
                    out.push_back(nums[j]);
                    break;
                }
            }
        }
        return out;
    }
};