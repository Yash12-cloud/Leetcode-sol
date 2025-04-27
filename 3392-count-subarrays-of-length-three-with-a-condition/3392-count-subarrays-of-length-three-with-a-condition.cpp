class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int j;
        int count =0;
        for(int i=0;i<n;i++){
            j=i+2;
            int mid=(i+j)/2;
            if(j<n && nums[i]+nums[j]==(double(nums[mid])/2)){
                count++;
            }
        }
        return count;
    }
};