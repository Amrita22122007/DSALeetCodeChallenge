class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1; j<n; j++){
        //         int heights = min(height[i],height[j]);
        //         int width = j-i;
        //         int area = heights*width;
        //         ans= max(ans,area);
        //     }
   
        int maxWater=0;
        int lp=0 , rp=n-1;
        while(lp<rp){
            int ht = min(height[lp],height[rp]);
            int wt = rp-lp;
            int currentWater = ht*wt;
            maxWater = max(maxWater, currentWater);

             height[lp]<height[rp]? lp++:rp--;
        }

        return maxWater;
        
    }
};