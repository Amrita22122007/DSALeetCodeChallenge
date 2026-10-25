class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        // for(int i=0; i<n; i++){
        //     for(int j=i; j<n; j++){
        //         int sum=0;
        //         for(int k=i; k<=j; k++){
        //             sum=sum+arr[k];
        //         }

        //         int length= j-i+1;
        //         if(length%2==1){
        //             ans = ans+sum;
        //         }
        //     }
        // }
        // return ans;

       
        //better approach
 
        vector<int>prefix(n);
        prefix[0]=arr[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+arr[i];
        }

        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                int length=j-i+1;

                if(length%2==1){
                    int sum;

                    if(i==0){
                        sum = prefix[j];
                    }
                    else{
                        sum = prefix[j]-prefix[i-1];
                    }

                    ans=ans+sum;
                }
            }
        }
        return ans;
    }
};   
       