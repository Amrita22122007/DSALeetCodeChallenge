class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start=0 , end=n-1;
        if( nums[0] < nums[n-1]){
            return nums[0];
        }
        if(n==1){
            return nums[0];
        }
        if(n==2){
            if(nums[0] > nums[1]){
                return nums[1];
            }
            else{
                return nums[0];
            }
        }
        while(start<=end){
            int mid = start +(end-start)/2;
            // if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1] && mid<n && mid>0){
            //     return nums[mid];
            // }
            if(mid >0 && nums[mid] < nums[mid-1]){
                return nums[mid];
            }
            //  if(mid <n-1 && nums[mid]< nums[mid+1]){
            //     return nums[mid];
            // }
            else if(nums[mid] >= nums[0]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
 return -1;
    }
};