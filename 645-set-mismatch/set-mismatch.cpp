class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, unsigned int> count;
        vector<int> out(2);
        for (auto a: nums) {
            count[a]++;
        }
        for(int i = 1; i <= nums.size(); i++) {
            if (count[i] == 0) out[1] = i;
            else if (count[i] == 2) out[0] = i;
        }
        return out;
    }
};