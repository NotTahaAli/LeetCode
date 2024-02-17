class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        vector<int> bricksNeeded(heights.size(),0);
        int maxDistance = 0;
        int prevMaxDistance;
        for (int i = 1; i < heights.size(); i++) {
            bricksNeeded[i] = max(heights[i]-heights[i-1],0);
        }
        do {
            int tempBricks = bricks;
            int tempLadders = ladders;
            prevMaxDistance = maxDistance;
            int i = 1;
            for (; i < heights.size(); i++) {
                if (bricksNeeded[i] > tempBricks) {
                    if (tempLadders == 0) {
                        break;
                    } else {
                        tempLadders--;
                    }
                } else {
                    tempBricks -= bricksNeeded[i];
                }
            }
            maxDistance = i - 1;
            sort(bricksNeeded.begin(), bricksNeeded.begin()+i);
        } while (prevMaxDistance < maxDistance);
        return max(prevMaxDistance,maxDistance);
    }
};