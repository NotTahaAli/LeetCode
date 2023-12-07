class Solution {
public:
    string largestOddNumber(string num) {
        int right = num.size()-1;
        while (right >= 0 && (num[right] == '0' || num[right] == '2' || num[right] == '4' || num[right] == '6' || num[right] == '8')) right--;
        return num.substr(0,right+1);
    }
};