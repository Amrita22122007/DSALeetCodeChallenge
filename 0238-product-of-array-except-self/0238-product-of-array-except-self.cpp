class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        // vector<int>ans;
        // for(int i=0; i<n; i++){
        //     int product=1;
        //     for(int j=0; j<n; j++){
        //         if(i==j){
        //             continue;
        //         }else{
        //          product=product*nums[j];
                
        //         }
        //     }
        //          ans.push_back(product);       
        // }

        // return ans;


        //Better Approach
        // vector<int>prefixProduct(n);
        // prefixProduct[0]=nums[0];
        // for(int i=1; i<n ;i++){
        //     prefixProduct[i]=prefixProduct[i-1]*nums[i];
        // }

        // vector<int>suffixProduct(n);
        // suffixProduct[n-1]=nums[n-1];
        // for(int i=n-2; i>=0; i--){
        //     suffixProduct[i]=suffixProduct[i+1]*nums[i];
        // }
         
        //  vector<int>ans;
        // for(int i=0; i<n; i++){
        //     int leftprt= i==0?1:prefixProduct[i-1];
        //     int rightprt= i==n-1?1:suffixProduct[i+1];
        //     int res=leftprt*rightprt;
           
        //    ans.push_back(res);
        // }
        
        // return ans;


        //optimize code

        vector<int>ans(n,1);
        for(int i=1;i<n; i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=n-1; i>=0; i--){
            ans[i]=ans[i]*suffix;
            suffix=suffix*nums[i];
        }

        return ans;
    }
  
};