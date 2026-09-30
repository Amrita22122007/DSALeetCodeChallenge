class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int n = nums.size(); 
        
        if(n <= 2)
            return n;

        int slow = 0, fast = 0; 
        int count = 0; 
        
        while(fast < n) { 
            
            if(fast == 0) {
                nums[slow] = nums[fast];
                slow++;
                count = 1;
            }
            
            else if(nums[fast] == nums[fast - 1]) { 
                
                if(count < 2) { 
                    nums[slow] = nums[fast];
                    count++; 
                    slow++; 
                } 
            } 
            
            else { 
                nums[slow] = nums[fast]; 
                count = 1; 
                slow++;
            } 
            
            fast++; 
        } 
        
        return slow; 
    
    }
};