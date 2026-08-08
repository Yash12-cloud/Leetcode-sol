class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int sum = 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            int rem = sum - k;
            count += mp[rem];
            mp[sum]++;
        }
        return count;
    }
};