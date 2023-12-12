class Solution {
public:
    struct Freq {
        char key;
        int count = 0;
    };

    static bool compareFunc(Freq a, Freq b) {
        return a.count > b.count;
    }

    string frequencySort(string s) {
        vector<Freq> frequencies;
        sort(s.begin(), s.end());
        int len = s.size();
        int count = 1;
        int size = 0;
        for (int i = 1; i < len; i++) {
            if (s[i] == s[i-1]) count++;
            else {
                frequencies.push_back({s[i-1],count});
                size++;
                count = 1;
            }
        }
        frequencies.push_back({s[len-1],count});
        size++;
        sort(frequencies.begin(), frequencies.end(), compareFunc);
        string out = "";
        for (int i = 0; i < size; i++) {
            while (frequencies[i].count > 0) {
                out += frequencies[i].key;
                frequencies[i].count--;
            }
        }
        return out;
    }
};