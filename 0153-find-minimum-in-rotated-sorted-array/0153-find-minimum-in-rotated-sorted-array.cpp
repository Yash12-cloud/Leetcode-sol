class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int mid;
        while(low<high){
            mid = (high+low) / 2;
            if(nums[mid] > nums[high]){ // agar nums[mid] bada hua matlab right side chota
                low = mid+1;
            }
            else if(nums[mid]<= nums[high]){ // agar nums[mid] chota ya barabar hua matlab right side chota
                high = mid;
            }
        }
        return nums[low];
    }
};