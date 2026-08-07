class Solution {
public:
    bool isPossible(vector<int>&piles,int maxSpeed , int h){
        long long totalTime=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalTime=totalTime+piles[i]/maxSpeed;
            if(piles[i]%maxSpeed){
                totalTime++;
            }
        }
        return totalTime<=h;
    }
  
    int minEatingSpeed(vector<int>& piles, int h) {
     long long start=1;
     int n=piles.size();
     long long sum=0;
     for(int i=0; i<n ; i++){
        sum= sum +piles[i];
     }
     long long end=sum;

     int ans=-1;
     while(start<=end){
        long long  mid=start+(end-start)/2;
        if(isPossible(piles,mid,h)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
     }  

     return ans; 
    }
};