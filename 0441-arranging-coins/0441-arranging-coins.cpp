class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0;
        while (n >= row + 1) {   // enough coins for the next row?
            row++;               // build that row
            n -= row;            // spend its coins
        }
        return row;
    }
};