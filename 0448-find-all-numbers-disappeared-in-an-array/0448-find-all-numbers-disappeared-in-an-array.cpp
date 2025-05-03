class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        int i =0;
        while(i<n){
            int correctIdx = nums[i]-1;
            if(nums[correctIdx] == nums[i]) i++;
            else {
                swap(nums[i],nums[correctIdx]);
            }
        }
        for(int i = 0;i<n;i++){
            if(nums[i] != i+1){
                res.push_back(i+1);
            }
        }
        return res;
    }
};