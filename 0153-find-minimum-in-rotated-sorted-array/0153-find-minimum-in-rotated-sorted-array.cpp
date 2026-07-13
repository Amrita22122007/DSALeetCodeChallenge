class Solution {
public:
    int findMin(vector<int>& nums) {
       int n=nums.size();
       int start=0 , end=n-1;
       //base case
       if(nums[0]<=nums[n-1]){
        return nums[0];
       }
       if(n == 1) return nums[0];
       if(n == 2) return min(nums[0], nums[1]);
       while(start<=end){
          int mid= start+(end-start)/2;

           if (mid > 0 && nums[mid - 1] > nums[mid]){
                return nums[mid];
           }
            if (mid < n - 1 && nums[mid] > nums[mid + 1]){
                return nums[mid + 1];
            }
          else if(nums[mid]>nums[0]){
            start= mid+1;
          }
          else{
            end= mid-1;
          }
       } 

       return -1;
    }
};