class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int lastI = 0;
        int size = colors.size();
        int minTime = 0;
        for (int i = 1; i < size; i++) {
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