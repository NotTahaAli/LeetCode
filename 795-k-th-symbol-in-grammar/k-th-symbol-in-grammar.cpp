class Solution {
public:
    int kthGrammar(int n, int k) {
        bool prev = 0;
        k--;
        for (int i = 1; i < n; i++) {
            prev = (k%2) ? !prev : prev;
            k = k/2;
        }
        cout << k << endl;
        return prev;
    }
};