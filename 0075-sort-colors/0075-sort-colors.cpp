class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return;
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else{
                mid++;
            }
        }

    }
};