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

        int n = arr.size();
        int missingCount = 0;
        int pointer =0;
        int current=1;
        while(missingCount < k){
            if( pointer<n && arr[pointer]== current){
                pointer++;
                current++;
            }
            else{
                missingCount++;
                current++;
            }
        }
        return current -1;
    }
};