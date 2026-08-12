class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int days, int m, int k){
        int counter = 0;
        int noOfBouquets=0;
        int n=bloomDay.size();
        for(int i=0; i<n;i++){
            if(bloomDay[i]<=days){
                counter++;
            }
            else{
                 noOfBouquets+=(counter/k);
                 counter=0;
            }
        }
        noOfBouquets+=(counter/k);
        if( noOfBouquets>=m){
            return true;
        }
        else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       int n=bloomDay.size();
       int start = *min_element(bloomDay.begin(), bloomDay.end());
       int end= *max_element(bloomDay.begin(), bloomDay.end());
       int ans=-1;
       while(start<=end){
        int mid=start+(end-start)/2;
        if(isPossible(bloomDay,mid,m,k)){
            ans=mid;
            end=mid-1;
        }
        else{
            start = mid+1;
        }
       }
     return ans;
    }
};