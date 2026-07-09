class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start = 0 , end=n-1;
        int index = n;//agar target bda hua array ke sare element se eg-[1,3,5,6,] target=8 toh yeh insert hoga array ka jo size hoga mtlb index 5 pr

        while(start<=end){
            int mid= start+(end-start)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                start = mid+1;
            }
            else{
                index = mid;
                end = mid-1;
            }
        }
        return index;
    }
};