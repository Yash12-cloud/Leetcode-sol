class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int maxSum=nums[0],sum=nums[0];

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                sum += nums[i];
            maxSum= max(sum,maxSum);
            }    
            else sum =nums[i];
        }
        maxSum= max(sum,maxSum);
        return maxSum;
    }
};