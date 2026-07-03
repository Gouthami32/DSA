class Solution {
public:
    int arrangeCoins(int n) {
        long long k = (sqrt(1LL + 8LL * n) - 1) / 2;
        return k;
    }
};