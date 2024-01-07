class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int maxCount = 0;
        for (int i = 0; i < size; i++) {
            if (height[i]*(size-i-1) > maxCount) {
                for (int j = i+1; j < size; j++) {
                    maxCount = max(maxCount, min(height[i],height[j])*(j-i));
                }
            } 
        }
        return maxCount;
    }
};