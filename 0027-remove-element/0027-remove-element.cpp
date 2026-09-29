class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        // vector<int>ans;
        // for(int i=0 ; i<n; i++){
        //     if(nums[i]!=val){
        //         ans.push_back(nums[i]);
        //     }
        // }
        // for(int i=0 ; i<ans.size(); i++){
        //     nums[i]= ans[i];
        // }
        // return ans.size();

        //optimize

        // int k=0;
        // for(int i=0; i<n; i++){
        //     if(nums[i]!=val){
        //         nums[k] = nums[i];
        //         k++;
        //     }
        // }
        // return k;


        int slow=0   , fast = 0;
        while(fast<n){
            if(nums[fast]!= val){
                nums[slow]=nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};