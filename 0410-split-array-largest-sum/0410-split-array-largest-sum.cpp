class Solution {
public:

     bool isSplitPossible(vector<int>& nums, long long largestSum, int k){
        int n=nums.size();
        int splitLength = 1;
        long long splitSum=0;
        for(int i=0; i<n; i++){
           if(splitSum + nums[i] <= largestSum){
            splitSum = splitSum + nums[i];
           }
           else{
            splitLength++;
            if(splitLength > k){
                return false;
            }
            else{
                splitSum=0;
                splitSum = splitSum + nums[i];
            }
           }
        }
        return true;
     }
    int splitArray(vector<int>& nums, int k) {
        int n= nums.size();

        int start = *max_element(nums.begin(), nums.end());
        long long sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        long long end=sum;
        int ans=-1;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(isSplitPossible(nums,mid,k)){
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