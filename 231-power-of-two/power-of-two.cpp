class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n >> 31) != 0)
            return false;
        int count1s = 0;
        for (int i = 0; i < 31; i++) {
            if (((n >> i) & 0x1) == 1) {
                count1s++;
            }
        }
        return count1s == 1;
    }
};