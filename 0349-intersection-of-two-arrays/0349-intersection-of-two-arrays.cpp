class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int>ans;
        for(int i=0; i<n1; i++){
            for(int j=0 ; j<n2; j++){
                if(nums1[i]== nums2[j]){
                            bool alreadyPresent = false;
                    for(int k=0; k<ans.size(); k++){
                       
                         if(ans[k]==nums1[i]){
                            alreadyPresent = true;
                            break;
                         }
                    }
                    if(alreadyPresent == false){
                        ans.push_back(nums1[i]);
                    }
                    break;
                }
            }


        }
        return ans;
    }
};