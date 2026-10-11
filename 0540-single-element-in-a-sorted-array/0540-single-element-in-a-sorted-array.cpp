class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // Method - 1 : Bit Manipulation
        // int ans = nums[0];
        // for(int i = 1; i < nums.size(); i++){
            // ans ^= nums[i];
        // }
        // return ans;

        //Method - 2 : Binary search

        int n = nums.size();
        if(n==1) return nums[0];
        int low = 0;
        int high = n-1;
        int mid;

        while(low <= high){
            mid = (low+high) /2;
            if(mid%2 == 0 and nums[mid+1] == nums[mid]){ // even
            // left ma koi bhi single element nhi hai sab pair ma hai (even, odd)
                low = mid+1;
            }
            else if(mid%2 == 0 and nums[mid] != nums[mid+1]){//even
                high = mid-1;
            }
            else if(mid%2 != 0 and nums[mid] == nums[mid-1]){ // odd
                low = mid+1;
            }
            else{
                high = mid-1;
            }
            
        }
        return nums[low];
    }
};