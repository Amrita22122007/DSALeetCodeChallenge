class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int n = nums.size();
        // for(int i=0 ; i<n; i++){
        //     int min_index = i;

        //     for(int j=i+1; j<n; j++){
        //         if(nums[j] < nums[min_index])
        //         min_index = j;
        //     }

        //     swap(nums[i], nums[min_index]);
        // }


        int n = nums.size();
        int low=0 , high=n-1 , mid=0;
        while(mid <= high){
            if(nums[mid]== 0){
                swap(nums[mid], nums[low]);
                mid++, low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};