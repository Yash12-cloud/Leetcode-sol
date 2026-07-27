class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x= nums.size();
        sort(nums.begin(),nums.end());
        return ((nums[x-1]-1)*(nums[x-2]-1));
    }
};