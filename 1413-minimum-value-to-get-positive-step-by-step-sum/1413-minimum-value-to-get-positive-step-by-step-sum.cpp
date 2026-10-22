class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n= nums.size();
        // vector<int>RunningSum(n+1);
        // while(true){
        // int startValue=1;
        // RunningSum[0]=startValue;
        // int valid =true;
        // for(int i=1; i<=n; i++){
           
        //     RunningSum[i]=RunningSum[i-1]+nums[i-1];
        //     if(RunningSum[i]<1){
        //         valid=false;
        //         break;
                
        //     }
        // }
        //   if(valid){
        //     return startValue;
        //   }
        //   startValue++;

        // }

        int prefix=0;
        int minprefix=0;
        for(int i=0; i<n; i++){
            prefix=prefix+nums[i];
            minprefix=min(prefix,minprefix);
        }
      
      return 1-minprefix;
    }
};