class Solution {
public:
    int arrangeCoins(int n) {
        int coins = n;
        int row =1;
        while(coins>=row){
              coins = coins-row;
              row++;
        }
        return row-1;
    }
};