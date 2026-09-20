class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n-1, mid;
        int ans = INT_MAX;

        vector<int> result;

        while(low <= high){
            mid = (low+high)/2;

            if(nums[mid] == target and mid < ans){
                ans = mid;
            }
            if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        if(ans == INT_MAX) ans = -1;
        result.push_back(ans);

        low = 0, high = n-1, ans = INT_MIN;
        
        while(low <= high){
            mid = (low+high)/2;

            if(nums[mid] == target and mid > ans){
                ans = mid;
            }
            if(nums[mid] <= target){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        if(ans == INT_MIN) ans = -1;
        result.push_back(ans);

        return result;
    }
};