class Solution {
public:
    bool isPossible(vector<int>nums, int divisor , int threshold){
        int n=nums.size();
        int sumNearest=0;
        for(int i=0;i<n;i++){
            int x=nums[i]/divisor;
            if(nums[i]%divisor!=0){
                x++;
            }
            sumNearest +=x;
            if(sumNearest>threshold){
                return false;
            }
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=1;
        int end=*max_element(nums.begin(), nums.end());
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPossible(nums,mid,threshold)){
                ans = mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        return ans;
    }
};