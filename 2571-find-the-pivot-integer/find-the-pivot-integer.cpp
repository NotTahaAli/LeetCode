class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = (n*(n+1))/2;
        int currentSum = 0;
        for (int i = 1; i <= n; i++) {
            currentSum += i;
            if (currentSum*2 == totalSum+i)
                return i;
        }
        return -1;
    }
};