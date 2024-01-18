class Solution {
public:
    int climbStairs(int n) {
        int possible = 0;
        int maxCountOf2 = n/2;
        int temp;
        int numberof2;
        int numberof1;
        for(int i = 0; i <= maxCountOf2; i++) {
            numberof2 = i;
            numberof1 = n-i*2;
            possible += tgamma(numberof2+numberof1+1) / (tgamma(numberof1+1) * tgamma(numberof2+1)) + 0.5;
        }
        return possible;
    }
};