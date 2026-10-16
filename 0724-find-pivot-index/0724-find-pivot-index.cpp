class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        for(int i=0 ; i<n ; i++){
            int leftSum=0 , rightSum=0;

            //sum of left subarray
            for(int j=0 ; j<i; j++){
                leftSum+=nums[j];
            }
            //sum of right subarray

            for(int j=i+1; j<n; j++){
                rightSum += nums[j];
            }

            if(leftSum == rightSum){
                   ans=i;
                   break;
            }
        }
        return ans;
    }
};