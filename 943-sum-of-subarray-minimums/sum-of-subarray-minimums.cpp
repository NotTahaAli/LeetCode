class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        long long int sum = 0;
        int minimum;
        int cur = 0;
        int prev = 0;
        for (int i = 0; i < arr.size(); i++) {
            minimum = arr[i];
            cur = 0;
            if (i < 1 || arr[i] < arr[i-1]) {
                for (int j = i; j >= 0; j--) {
                    minimum = min(minimum, arr[j]);
                    cur += minimum;
                }
            } else {
                cur = prev + arr[i];
            }
            prev = cur;
            sum += cur;
        }
        return (sum % (1000000007));
    }
};