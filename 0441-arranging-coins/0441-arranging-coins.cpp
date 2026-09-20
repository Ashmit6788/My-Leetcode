class Solution {
public:
    int arrangeCoins(int n) {
        long long lo = 0, hi = n, ans = 0;
        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            long long need = mid * (mid + 1) / 2;   // coins needed for mid rows
            if (need <= n) {
                ans = mid;      // mid rows fit, save it and try more
                lo = mid + 1;
            } else {
                hi = mid - 1;   // too many rows, try fewer
            }
        }
        return ans;
    }
};