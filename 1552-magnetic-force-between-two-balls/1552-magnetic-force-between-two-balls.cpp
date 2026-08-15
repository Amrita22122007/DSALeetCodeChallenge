class Solution {
public:
bool allocationPossible(vector<int>& position,long long distance,int m){
    int n=position.size();
    int countBalls=1;
    int basketposition = position[0];
    for(int i=1;i<n;i++){
         if(basketposition+distance<=position[i]){
            countBalls++;
            basketposition=position[i];
         }
         if(countBalls>=m){
            return true;
         }
    }
    return false;
}
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        long long start=0;
        long long end=position[n-1]-position[0];
        int ans=-1;
        while(start <=end){
            long long mid = start+(end-start)/2;
            if(allocationPossible(position,mid,m)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        return ans;
    }
};