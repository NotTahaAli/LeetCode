class Solution {
public:
    int binaryStringToInt(string binaryString) {
        int num = 0;
        int factor = 1;
        for (int i = binaryString.length()-1; i >= 0; i--) {
            num += factor*((binaryString[i] == '1')?1:0);
            factor *= 2;
        }
        return num;
    }

    string intToBinaryString(int num, int length) {
        string binaryString;
        for (int i = 0; i < length; i++) {
            binaryString = ((num % 2) ? '1':'0') + binaryString;
            num /= 2;
        }
        return binaryString;
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int currentNum = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (binaryStringToInt(nums[i]) == currentNum) currentNum++;
            else break;
        }
        return intToBinaryString(currentNum,nums.size());
    }
};