class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        // int ans=-1;
        // for(int i=0 ; i<n ; i++){
        //     int leftSum=0 , rightSum=0;

        //     //sum of left subarray
        //     for(int j=0 ; j<i; j++){
        //         leftSum+=nums[j];
        //     }
        //     //sum of right subarray

        //     for(int j=i+1; j<n; j++){
        //         rightSum += nums[j];
        //     }

        //     if(leftSum == rightSum){
        //            ans=i;
        //            break;
        //     }
        // }
        // return ans;

    //Better Approach

    vector<int>prefix(n);
    prefix[0]=nums[0];
    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]+nums[i];
    }

    vector<int>suffix(n);
    suffix[n-1]=nums[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i]=suffix[i+1]+nums[i];
    }

    for(int i=0; i<n; i++){
        int leftSum = i==0?0:prefix[i-1];
        int rightSum =i==n-1?0:suffix[i+1];

        if(leftSum == rightSum){
            return i;
        }
    }

    return -1;
    }
};