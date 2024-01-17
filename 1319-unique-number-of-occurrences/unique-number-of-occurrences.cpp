class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occurances;
        for(int i: arr) {
            occurances[i]++;
        }
        vector<int> occuranceCount;
        for(pair<int, int> o: occurances) {
            occuranceCount.push_back(o.second);
        }
        sort(occuranceCount.begin(), occuranceCount.end());
        for(int i = 1; i < occuranceCount.size(); i++) {
            if (occuranceCount[i] == occuranceCount[i-1]) return false;
        }
        return true;
    }
};