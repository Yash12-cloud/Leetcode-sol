class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return true;
            }
            // condition that was bugging the code 
            // arr[low] == arr[mid] == arr[high]
            if((nums[low] == nums[mid]) and (nums[mid] == nums[high])){
                low++;
                high--;
            }

            // Left sorted
            else if (nums[low] <= nums[mid]) { // Identify the sorted part ---> left / right
                if (nums[low] <= target && target < nums[mid]) { // check if target in between 
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } 
            // right sorted
            else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return false;
    }
};