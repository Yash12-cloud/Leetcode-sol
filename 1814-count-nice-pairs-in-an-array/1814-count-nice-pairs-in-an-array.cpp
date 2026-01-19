class Solution {
public:
    int rev(int x){
        int num = 0;
        while(x>0){
            num *= 10;
            num += x%10;
            x/=10;
        }
        return num;
    }
    
    int countNicePairs(vector<int>& nums) {
        long long count = 0;
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums[i] = nums[i]-rev(nums[i]);
        }
        for(int i = 0; i < n; i++){
            if(m.find(nums[i]) == m.end())
                m[nums[i]]++;
            else{
                count += m[nums[i]];
                m[nums[i]]++;
            }
        }
        return count % 1000000007;
    }
};