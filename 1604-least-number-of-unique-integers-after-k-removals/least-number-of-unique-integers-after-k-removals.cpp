class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> count;
        for (auto c: arr) {
            count[c]++;
        }
        vector<int> counts;
        counts.reserve(count.size());
        for (auto c: count) {
            counts.push_back(c.second);
        }
        sort(counts.rbegin(),counts.rend());
        while (k > 0) {
            counts.back()--;
            if (counts.back() == 0) {
                counts.pop_back();
            }
            k--;
        }
        return counts.size();
    }
};