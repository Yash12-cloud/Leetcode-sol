class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i , nums.size(); i++){
            int count = 0;
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    count++;
                    ans = nums[i];
                    break;
                }
            }
            if(ans != 0) break;
        }
        return ans;
    }
};