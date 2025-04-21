class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int misNum=n;
        if(n==2 || n==1) return n;
        sort(nums.begin(),nums.end());
        for(int i =1;i<n;i++){
            if(nums[i]!=i){
                misNum=i;
                break;
            }
        }
        return misNum;
    }
};