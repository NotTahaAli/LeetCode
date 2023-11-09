class Solution {
public:
    unsigned long long int MultSum(unsigned long long int n) {
        if (n == 1) return 1;
        return n + MultSum(n-1);
    }

    int countHomogenous(string s) {
        unsigned long long int homogenous = 0;
        unsigned long long int count = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i-1]) count++;
            else {
                homogenous += MultSum(count);
                homogenous %= 1000000007;
                count = 1;
            }
        }
        homogenous += MultSum(count);
        homogenous %= 1000000007;
        return homogenous;
    }
};