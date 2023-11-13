class Solution {
public:
    string sortVowels(string s) {
        vector<unsigned int> vowels;
        int frequency['u'-'A'+1] = {0};
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'E' || s[i] == 'e' || s[i] == 'O' || s[i] == 'o' || s[i] == 'I' || s[i] == 'i' || s[i] == 'U' || s[i] == 'u') {
                vowels.push_back(i);
                frequency[s[i]-'A']++;
            }
        }
        int firstIndex = 0;
        for (int i = 0; i < vowels.size(); i++) {
            while (frequency[firstIndex] == 0) firstIndex++;
            s[vowels[i]] = firstIndex+'A';
            frequency[firstIndex]--;
        }
        return s;
    }
};