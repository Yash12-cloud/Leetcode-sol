class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        const int MOD = n + 1;
        
        for (int num : nums) {
            nums[num % MOD - 1] += MOD;
        }

        vector<int> res(2, 0);

        for (int i = 0; i < n; i++) {
            if (nums[i] / MOD == 2) res[0] = i + 1;   // duplicate
            else if (nums[i] / MOD == 0) res[1] = i + 1; // missing
        }

        return res;
    }
};