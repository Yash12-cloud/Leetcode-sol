class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pst;
        vector<int> ngt;
        for(auto x : nums){
            if(x > 0) pst.push_back(x);
            else ngt.push_back(x);
        }

        int pos = 0, neg = 0;
    
        for(int i = 0; i < n; i++){
            if(i%2 == 0) nums[i] = pst[pos++];
            else nums[i] = ngt[neg++];
        }
        return nums;
    }
};