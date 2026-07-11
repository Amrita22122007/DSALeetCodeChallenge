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

        for(int i=1; i<n; i++){
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};