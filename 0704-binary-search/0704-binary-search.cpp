class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo =0;
        int hi =n-1;
        int mid;
        bool flag =false;
        while(lo <= hi){
            mid=(lo+hi)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else if(nums[mid]<target) lo=mid+1;
        }
        if(flag==false) return -1;
        else return mid;
    }
};