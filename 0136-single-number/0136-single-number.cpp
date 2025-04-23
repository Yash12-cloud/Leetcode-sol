class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n =nums.size();
        int idx=0;
        for(int i=0;i<n;i++){
            int count =0;
            idx =nums[i];
            for(int j=0;j<n;j++){
                if(nums[i]==nums[j]) count++;
            }
            if(count==1) return idx;
        }
        return -1;
    }
};