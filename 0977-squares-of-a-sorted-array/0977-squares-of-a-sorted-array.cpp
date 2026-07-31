class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        vector<int> ans(n,0);
        int k = n-1;
        while(i<=j){
            if(abs(nums[i]) >= abs(nums[j])){
                ans[k--] = nums[i]*nums[i];
                i++;
            }
            else{
                ans[k--] = nums[j]*nums[j];
                j--;
            }
        }
        return ans;
    }
};