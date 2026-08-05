class Solution {
public:
    int arrangeCoins(int n) {
        // int coins = n;
        // int row =1;
        // while(coins>=row){
        //       coins = coins-row;
        //       row++;
        // }
        // return row-1;


        long long start =1 , end = n;
        int  ans = 0;
        while(start<=end){
            long long mid = start + (end-start)/2;
            long long coinNeeded = mid*(mid+1)/2;

            if(coinNeeded <= n){
            ans = mid;
            start = mid+1;     
                   }       
            else{
                end = mid-1;
            }
            
        }
        
        return ans;
    }
};