// class Solution {
// public:
//     int helper(vector<int> &nums,int idx){
//         if(idx == nums.size()-1 or idx == nums.size()-2) return nums[idx];
//         if(idx >= nums.size()) return 0;
//         return nums[idx] + max(helper(nums,idx+2),helper(nums,idx+3));
//     }
//     int rob(vector<int>& nums) {
//         return max(helper(nums,0),helper(nums,1));
//     }
// };

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n < 3) return max(nums[n-1],nums[n-2]);

        for(int i = 2; i < n; i++){
            int num1 = nums[i-2];
            int num2;
            if(i-3 < 0){
                num2 = INT_MIN;
            }
            else num2 = nums[i-3];

            nums[i] += max(num1,num2);
        }
        return max(nums[n-1],nums[n-2]);
    }
};