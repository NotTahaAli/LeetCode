class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool isPalindrome;
        int wordLen;
        for (auto word: words) {
            isPalindrome = true;
            wordLen = word.size();
            for (int i = 0; i < wordLen/2; i++) {
                if (word[i] != word[wordLen-i-1]) {
                    isPalindrome = false;
                    break;
                }
            }
            if (isPalindrome) return word;
        }
        return "";
    }
};