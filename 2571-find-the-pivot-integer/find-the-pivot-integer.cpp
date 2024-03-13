class Solution {
public:
    int pivotInteger(int n) {
        int totalSumx2 = n*(n+1);
        for (int i = 1; i <= n; i++)
            if (2*i*i == totalSumx2) return i;
        return -1;
    }
};