class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        for(int i=0; i<n ;i++){
            for(int j=0 ; j<n ;j++){
                if(nums[i]- nums[j]!=k){
                    continue;
                }
                else if(nums[i]-nums[j]==k){
                    ans++;
                }
                else{
                     ans++;
                }
            }
        }
        return ans;
    }
};