class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int> winners, oneLoss;
        unordered_map<int, int> losses;
        for (auto matchInfo: matches) {
            losses[matchInfo[0]];
            losses[matchInfo[1]]++;
        }
        for (auto iter: losses) {
            if (iter.second == 0) {
                winners.push_back(iter.first);
            } else if (iter.second == 1) {
                oneLoss.push_back(iter.first);
            }
        }
        sort(winners.begin(), winners.end());
        sort(oneLoss.begin(), oneLoss.end());
        return {winners, oneLoss};
    }
};