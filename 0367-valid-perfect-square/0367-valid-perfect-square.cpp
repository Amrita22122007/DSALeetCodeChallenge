class Solution {
public:
    bool isPerfectSquare(int num) {
      //  long long i = 1;
        // while(i*i<= num){
        //     if(i*i==num){
        //         return true;
        //     }
        //     i++;
         
        // }
        // return false;
        
    

    int start = 1 , end = num ;

    while(start<=end){
        long long mid = start+(end-start)/2;
        if(mid*mid==num){
            return true;
        }
        else if(mid<num/mid){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

       
       
    }
     return false;
    }
    
};