class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++){
            int target=0;
            int newtarget = target -nums[i];
            int start=i+1, end=n-1;
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            while(start<end){
                if(nums[start]+nums[end]==newtarget){
                      ans.push_back({nums[i],nums[start],nums[end]});
                      
                      start++;
                      end--;
                      while(start<end && nums[start]==nums[start-1]){
                        start++;
                      }
                      while(start<end && nums[end]==nums[end+1]){
                        end--;
                      }
                }
                else if(nums[start]+nums[end]<newtarget){
                    start++;
                }
                else{
                    end--;
                }
            }

        }
        return ans;
    }
};