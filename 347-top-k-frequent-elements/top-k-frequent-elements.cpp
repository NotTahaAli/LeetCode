class Solution {
public:
    struct Freq {
        int num;
        int count = 0;
    };

    static bool compFunc(Freq a, Freq b) {
        return a.count > b.count;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<Freq> frequencies;
        sort(nums.begin(), nums.end());
        int currCount = 1;
        int size = nums.size();
        for (int i = 1; i < size; i++) {
            if (nums[i]==nums[i-1]) currCount++;
            else {
                frequencies.push_back({nums[i-1],currCount});
                currCount = 1;
            }
        }
        frequencies.push_back({nums[size-1],currCount});
        sort(frequencies.begin(), frequencies.end(), compFunc);
        vector<int> out;
        for (int i = 0; i < k; i++) {
            out.push_back(frequencies[i].num);
        }
        return out;
    }
};