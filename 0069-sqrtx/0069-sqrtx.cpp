class Solution {
public:
    int mySqrt(int x) {
    //     if(x==0){
    //         return 0;
    //     }
    //     int i=1;
    //     while(i*i<=x){
    //         i++;
    //     }
    //     return i-1;
    // }

    int start=1 , end=x;
    int ans=-1;
    if(x<=1){
        return x;
    }
    while(start<=end){
       int  mid = start+(end-start)/2;
        if(mid == x/mid){
            return mid;
        }
        else if(mid<x/mid){
            ans=mid;
            start = mid+1;
        }
        else{
            end=mid-1;
        }

        
    }
    return ans;
    }

};