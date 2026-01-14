class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        // METHOD -2 : using Maps
        unordered_map<int,int> m;
        for(int i = 0 ;i < n; i++){
            if(m.find(target - nums[i]) != m.end()){
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
                break;
            }
            else{
                m[nums[i]] = i;
            }
        }

        // METHOD -1 : Brute force
        // for(int i =0;i<n-1;i++){
        //     for(int j = i+1;j<n;j++){
        //         int sum = nums[i]+nums[j];
        //         if(sum==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }
        return ans;
    }
};