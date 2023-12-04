class Solution {
public:
    string largestGoodInteger(string num) {
        int len = 0;
        int size = num.length();
        char cur = '\0';
        char max = '\0';
        for (int i = 0; i < size; i++) {
            if (num[i] > max && len < 3) {
                if (len == 0 || num[i] == cur) {
                    len++;
                    if (len == 3) {
                        len = 0;
                        max = cur;
                    }
                } else {
                    len = 1;
                }
                cur = num[i];
            } else {
                len = 0;
            }
        }
        string out = "";
        if (max >= '0') {
            out += max;
            out += max;
            out += max;
        }
        return out;
    }
};