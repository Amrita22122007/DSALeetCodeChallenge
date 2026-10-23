class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
    //     vector<int>prefix(n+1);
    //     prefix[0]=0;
    //     for(int i=1;i<n+1;i++){
    //         prefix[i] = prefix[i-1]+gain[i-1];
    //     }
    //     int ans=prefix[0];
    //     for(int i=1;i<n+1;i++){
    //        if(prefix[i]>ans){
    //         ans=prefix[i];
    //        }
    //     }
    //    return ans;


    //optimize

    int prefix=0;
    int maxprefix=0;
    for(int i=0; i<n;i++){
         prefix = prefix+gain[i];
         maxprefix = max(prefix, maxprefix);
    }

    return maxprefix;
    }
};