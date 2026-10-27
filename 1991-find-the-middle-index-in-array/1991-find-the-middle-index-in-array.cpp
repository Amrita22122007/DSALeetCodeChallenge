class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
      int n=nums.size();
      vector<int>prefixSum(n);
      prefixSum[0]= nums[0];
      for(int i=1; i<n; i++){
        prefixSum[i]=prefixSum[i-1]+nums[i];
      }

      vector<int>suffixSum(n);
      suffixSum[n-1]=nums[n-1];
      for(int i=n-2; i>=0; i--){
         suffixSum[i]=suffixSum[i+1]+nums[i];
      }

      for(int i=0; i<n; i++){
        int leftSum = i==0?0:prefixSum[i-1];
        int rightSum= i==n-1?0:suffixSum[i+1];

        if(leftSum == rightSum){
            return i;
            break;
        }
      }
      return -1;
    }
};