class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum_1 = (n*(n+1))/2;
        int sum_2 = 0;
        for(auto x : nums){
            sum_2 += x;
        }
        return abs(sum_1 - sum_2);
    }
};