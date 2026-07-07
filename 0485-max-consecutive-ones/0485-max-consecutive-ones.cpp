class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j = 0;
        int count = 0;
        int sum = 0;
        while(j<n){
            if(nums[i] == nums[j] and nums[j] == 1){
                sum++;
                count = max(sum,count);
                j++;
            }
            else{
                sum = 0;
                j++;
                i = j;
            }

        }
        return count;
    }
};