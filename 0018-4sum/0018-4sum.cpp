class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n = nums.size();
     sort(nums.begin(),nums.end());
      vector<vector<int>>ans;
      for(int i=0; i<n-3 ; i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
         for(int j=i+1; j<n-2 ; j++){
            int start = j+1 , end = n-1;
           
             long long newTarget =(long long)target-(nums[i]+nums[j]);
               if(j>i+1 && nums[j] == nums[j-1]){
                continue;
             }
            while(start<end){
               if((nums[start]+nums[end])==newTarget){
                  ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                  start++;
                  end--;

                while(start<end && nums[start]== nums[start-1]){
                    start++;
                }
               } 
               else if((nums[start]+nums[end])<newTarget){
                          start++;
               }
               else{
                end--;
               }
            }
         }

      }  
      return ans;
    }
};