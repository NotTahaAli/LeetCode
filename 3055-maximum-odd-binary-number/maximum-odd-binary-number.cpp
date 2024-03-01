class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c1 = 0;
        for (auto c: s) {
            if (c == '1') c1++;
        }
        string output = s;
        int strlen = 0;
        for (; output[strlen] != '\0'; strlen++) {
            if (c1 > 1) output[strlen] = '1', c1--;
            else output[strlen] = '0';
        }
        output[strlen-1] = '1';
        return output;
    }
};