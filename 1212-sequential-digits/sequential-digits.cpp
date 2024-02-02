class Solution {
public:
    int generateSequentialNum(int base) {
        int size = 0;
        int baseDigit = base;
        while (baseDigit > 9) {
            size++;
            baseDigit /= 10;
        }
        if (baseDigit >= (10 - size)) {
            baseDigit = 1;
            size++;
        }
        for (int i = 0; i < size; i++) {
            baseDigit *= 10;
            baseDigit += (baseDigit%100)/10 + 1;
        }
        if (baseDigit < base) {
            return generateSequentialNum((baseDigit / (int) pow(10,size) + 1) * pow(10,size));
        }
        return baseDigit;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> digits;
        int temp = low-1;
        while ((temp = generateSequentialNum(temp+1)) <= high ) {
            digits.push_back(temp);
        }
        return digits;
    }
};