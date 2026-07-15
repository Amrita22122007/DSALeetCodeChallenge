class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int current=1;
        int pointer=0;
        int missingCount=0;
        while(true){
        if(pointer<n && arr[pointer]==current){
            pointer++;
        }
        else{
            missingCount++;
            if(missingCount == k){
                return current;
            }
        }
        current++;

        }
    }
};