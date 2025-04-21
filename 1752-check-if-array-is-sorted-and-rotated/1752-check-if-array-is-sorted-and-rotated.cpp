class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        
        // If there's only one element, it's trivially sorted and rotated
        if (n == 1) return true;
        
        int count = 0;  // Count how many times the array decreases
        
        // Traverse the array and count the number of decreasing pairs
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                count++;
            }
        }
        
        // If there is more than one decreasing pair, it's not sorted and rotated
        if (count > 1) return false;
        
        // Special case: If there is exactly one decreasing pair, check the last element and first element
        if (count == 1 && nums[n - 1] > nums[0]) {
            return false;
        }
        
        return true;
    }
};

        // int pvt;
        // int smolEle=INT_MAX;
        // if(nums.size()==1) return true;
        // for(int i=0;i<nums.size();i++){
        //     if(smolEle>nums[i]){
        //         smolEle=nums[i];
        //         pvt=i;
        //     }
        // }
        // reverse(nums.begin()+pvt,nums.end());
        // reverse(nums.begin(),nums.begin()+pvt);
        // reverse(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]<nums[i-1]){
        //         return false;
        //     }
        // }
        // return true;
    
