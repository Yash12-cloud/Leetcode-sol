class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // In this question we have to return an peak
        int n = nums.size();
        
        if(n == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int low = 1;
        int high = n-2;
        int mid;

        while(low <= high){
            mid = (high + low)/2;

            if(nums[mid] > nums[mid-1] and nums[mid] > nums[mid+1]) return mid;
            else if(nums[mid] < nums[mid+1]) low = mid + 1;
            else if(nums[mid] < nums[mid-1]) high = mid - 1;
        }
        return -1;









        // brute
        int ans = INT_MIN;
        int idx = 0;
        for(int i = 0; i< nums.size(); i++){
            if(ans < nums[i]){
                ans = nums[i];
                idx = i;
            }
        }
        return idx;
    }
};