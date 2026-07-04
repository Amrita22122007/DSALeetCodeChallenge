class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans;
        for(int i=0 ; i<n ; i++){
            bool seen = false;
            for(int k=0 ; k<i ; k++){
                if(nums[k]== nums[i]){
                    seen = true;
                    break;
                }
            }
            if(seen){
                continue;
            }

            ans.push_back(nums[i]);

        }
        for(int i=0 ; i<ans.size(); i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};