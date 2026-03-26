class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid;

        while(mid<=high){
            if(nums[mid] == 2){
                swap(nums[high],nums[mid]);
                high--;
                
            }
            else if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else{//mid == 1
                mid++;
            }
        }

    }
};