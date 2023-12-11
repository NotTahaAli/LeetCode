class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        // int quarters[5] = {0};
        // quarters[0] = arr[0];
        // quarters[1] = arr[arr.size()/4];
        // quarters[2] = arr[arr.size()/2];
        // quarters[3] = arr[(arr.size() * 3)/4];
        // quarters[4] = arr[arr.size()-1];
        // for (int i = 1; i < 5; i++) {
        //     cout << quarters[i] << endl;
        //     if (quarters[i] == quarters[i-1]) return quarters[i];
        // }
        // return quarters[2];
        int size = arr.size();
        int cur = 1;
        int prev = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] == prev) {
                cur++;
                if (cur*4 > size) return prev;
            } else {
                cur = 1;
                prev = arr[i];
            }
        }
        return prev;
    }
};