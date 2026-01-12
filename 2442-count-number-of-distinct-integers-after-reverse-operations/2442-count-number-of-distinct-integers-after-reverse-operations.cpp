class Solution {
public:
int rev_num(int num){
    int ans = 0;
    while(num > 0){
        int mod = num%10;
        ans = ans*10 + mod;
        num = num/10;
    }
    return ans;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int rev = rev_num(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int> s;
        for(int i = 0; i < nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
};