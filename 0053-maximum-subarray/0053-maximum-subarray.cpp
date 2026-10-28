class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        // int ans=INT_MIN;
        // for(int i=0; i<n; i++){
        //     int sum = 0;
        //     for(int j=i; j<n; j++){
        //         sum += nums[j];
        //         ans=max(ans,sum);
        //     }
        // }

        // return ans;

        //optimize code

        int maxSum = INT_MIN, subSum =0;
        for(int i=0; i<n; i++){
            if(subSum<0){
                subSum = nums[i];
            }
            else{
                subSum += nums[i];
            }

            maxSum = max(maxSum,subSum);
        }

        return maxSum;
    }

};