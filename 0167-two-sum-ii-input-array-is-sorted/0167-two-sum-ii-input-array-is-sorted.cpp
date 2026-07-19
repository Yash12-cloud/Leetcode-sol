class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        vector<int> ans;
        while(low < high){
            if((nums[low] + nums[high]) == target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                break;
            }
            if(nums[low] + nums[high] < target){
                low++;
            }
            if(nums[low] + nums[high] > target){
                high--;
            }
        }
        return ans;
    }
};