class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int slow=0 ,fast=0;
         
        while(fast<n){
              if(nums[fast]==0){
                fast++;
              }
              else{
                nums[slow]=nums[fast];

                 if(slow!=fast){
                    nums[fast]=0;
                 }
                slow++;
                fast++;
                
              }
           

         
        }
          
            
       
    }
};