class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size() / 3;
        int coins = 0;
        sort(piles.begin(), piles.end());
        for (int i = piles.size()-2; i >= n; i-= 2) {
            coins += piles[i];
        }
        return coins;
    }
};