class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();

        int i = 0,j = 0;
        int sum = 0;
        int minlen = INT_MAX;
        int length = 0;
        while(j < n){
            sum += nums[j];
            while(sum >= target){
                length = j - i +1;
                
                minlen = min(minlen,length);
                sum -=nums[i];
                i++; 
            }
            j++;
        }
        if(minlen==INT_MAX) return 0;
        return minlen;
    }
};