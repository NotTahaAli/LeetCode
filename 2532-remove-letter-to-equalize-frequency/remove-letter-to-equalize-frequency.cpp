class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> count(26,0);
        for (auto c: word) {
            count[c-'a']++;
        }
        unordered_map<int, int> countOfCount;
        int differentCounts = 0;
        for (auto c: count) {
            if (c != 0) countOfCount[c]++;
        }
        differentCounts = countOfCount.size();
        if (differentCounts > 2) return false;
        if (differentCounts == 1) {
            return countOfCount.begin()->first == 1 || countOfCount.begin()->second == 1;
        }
        bool prev1 = true;
        auto val1 = *countOfCount.begin();
        auto val2 = *(++countOfCount.begin());
        cout << val1.first << " " << val1.second << endl;
        cout << val2.first << " " << val2.second << endl;
        if (val1.second != 1 && val2.second != 1) return false;
        if (val1.second == val2.second) {
            if (val1.first != 1 && val2.first != 1 && abs(val1.first - val2.first) > 1) return false;
        }
        else if (val1.second == 1) {
            if (val1.first != 1) {
                if (val2.first > val1.first || val1.first - val2.first > 1) return false;
            }
        } else {
            if (val2.first != 1) {
                if (val1.first > val2.first || val2.first - val1.first > 1) return false;
            }
        }
        return true;
    }
};