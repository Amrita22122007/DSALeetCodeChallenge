class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int n = arr.size();
        // int current=1;
        // int pointer=0;
        // int missingCount=0;
        // while(true){
        // if(pointer<n && arr[pointer]==current){
        //     pointer++;
        // }
        // else{
        //     missingCount++;
        //     if(missingCount == k){
        //         return current;
        //     }
        // }
        // current++;

        // }

        // int n = arr.size();
        // int missingCount = 0;
        // int pointer =0;
        // int current=1;
        // while(missingCount < k){
        //     if( pointer<n && arr[pointer]== current){
        //         pointer++;
        //         current++;
        //     }
        //     else{
        //         missingCount++;
        //         current++;
        //     }
        // }
        // return current -1;

  
        // int n = arr.size();      
        // for(int i=0; i<n; i++){
        //     int totalMissing = arr[i] -(i+1);

        //     if(totalMissing >= k){
        //     return i+k;
        //     }
            
        //  }

        //  return n+k;

        int start =0 , end = arr.size()-1;
        int ans = arr.size();
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]-(mid+1)< k){
                start = mid+1;
            }
            else{
                ans = mid;
                end = mid-1;
            }
        }
        return ans+k;
    }
};