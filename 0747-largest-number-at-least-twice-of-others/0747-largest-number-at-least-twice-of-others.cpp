class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxCount = INT_MIN;
        int idx=-1;

        for(int i = 0 ; i < n ; i++){
            if(maxCount<nums[i]){
                maxCount = nums[i];
                idx = i;
            }
        }
        int x;
        for(int i=0;i<n;i++){
            x = nums[i]*2;
            if(i != idx && x>maxCount){
                return -1;
            }
        }
        return idx;
    }
};