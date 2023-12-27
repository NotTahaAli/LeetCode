class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int lastI = 0;
        int minTime = 0;
        for (int i = 1; i < colors.size(); i++) {
            if (colors[i] == colors[lastI]) {
                if (neededTime[i] > neededTime[lastI]) {
                    minTime += neededTime[lastI];
                    lastI = i;
                } else {
                    minTime += neededTime[i];
                }
            } else {
                lastI = i;
            }
        }
        return minTime;
    }
};