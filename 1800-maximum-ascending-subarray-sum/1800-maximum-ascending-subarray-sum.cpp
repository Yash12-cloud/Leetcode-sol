class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int smallest=INT_MAX;
        int idx=0;
        for(int i =0;i<n;i++){
            if(smallest>nums[i]){
                smallest = min(smallest,nums[i]);
                idx=i;
            }
        }   
        int sum =nums[idx];
        for(int i=idx+1;i<n;i++){
            if(nums[i-1]<nums[i]){
                sum=sum+nums[i];
            }
        }
        return sum;
    }
};