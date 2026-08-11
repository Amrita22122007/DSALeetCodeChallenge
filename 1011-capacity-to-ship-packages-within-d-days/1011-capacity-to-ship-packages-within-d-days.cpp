class Solution {
public:
bool isCapacityPossible(vector<int>& weights,long long  maxCapacity,int days){
    int n = weights.size();
    int countDays=1;
    long long sumPackage=0;
    for(int i=0;i<n;i++){
       if( sumPackage+weights[i]<=maxCapacity){
      sumPackage = sumPackage+weights[i];
       }
       else{
        countDays++;
        if(countDays>days|| weights[i]>maxCapacity){
            return false;
        }
        else{
              sumPackage=0;
              sumPackage = sumPackage+weights[i];
                
        }
       }
    }
    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n=weights.size();
        long long start=1;
        // long long start=*max_element(weights.begin(), weights.end());
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        long long  end=sum;
        long long ans=-1;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(isCapacityPossible(weights,mid,days)){
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