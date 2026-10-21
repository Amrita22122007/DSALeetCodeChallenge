class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size();
        // vector<int>ans;
        // for(int i=1;i<=n;i++){
        //     int sum=0;
        //     for(int k=0; k<i; k++){
        //          sum= sum+nums[k];
        //     }
        //     ans.push_back(sum);
            
        // }
        // return ans;

        // //Better Approach
        // vector<int>prefix(n);
        // prefix[0]=nums[0];
        // for(int i=1; i<n; i++){
        //     prefix[i]= prefix[i-1]+nums[i];
        // }
        // return prefix;
//best approach

        for(int i=1; i<n; i++){
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};