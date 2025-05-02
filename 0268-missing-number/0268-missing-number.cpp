class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            if(nums[i] != i){
                break;
            }
        }
        return i;
    }
};