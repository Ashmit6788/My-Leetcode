class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lo = *max_element(weights.begin(), weights.end());
        int hi = accumulate(weights.begin(), weights.end(), 0);

        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (canShip(weights, days, mid)) {
                hi = mid;       // try smaller capacity
            } else {
                lo = mid + 1;   // need more capacity
            }
        }
        return lo;
    }

private:
    bool canShip(vector<int>& weights, int days, int capacity) {
        int daysNeeded = 1;
        int curLoad = 0;
        for (int w : weights) {
            if (curLoad + w > capacity) {
                daysNeeded++;
                curLoad = 0;
            }
            curLoad += w;
        }
        return daysNeeded <= days;
    }
};