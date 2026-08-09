class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // // Method-1 Brute
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // set<vector<int>> st;
        // for(int i = 0; i < n; i++){
        //     for(int j = i+1; j < n; j++){
        //         for(int k = j+1; k < n; k++){
        //             vector<int> res;
        //             int sum = nums[i] + nums[j] + nums[k];
        //             if(sum == 0){
        //                 res.push_back(nums[i]);
        //                 res.push_back(nums[j]);
        //                 res.push_back(nums[k]);
        //                 st.insert(res);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(),st.end());
        // return ans;

//-----------------------------------------------------------------------//
        
        // Method-2 Better

        // int n = nums.size();
        // set<vector<int>> ans;
        
        // for(int i = 0; i < n; i++){
        //     set<int> st;
        //     for(int j = i+1; j < n; j++){
        //         vector<int> res;
        //         int k = -(nums[i] + nums[j]);
        //         if(st.find(k) != st.end()){
        //             res.push_back(k);
        //             res.push_back(nums[i]);
        //             res.push_back(nums[j]);

        //             sort(res.begin(),res.end());// res vector ko sort isliya kiya kyuki set ma duplicate list na aai

        //             ans.insert(res);
        //         }
        //         st.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> Ans(ans.begin(),ans.end());
        // return Ans;
// ------------------------------------------------------------------//

        // Method 3 Optimal
        vector<vector<int>> ans;
        int n = nums.size();

        // 1. Sort the input array
        sort(nums.begin(), nums.end());

        // 2. Iterate through the array fixing the first element `nums[i]`
        for (int i = 0; i < n; i++) {
            // Skip duplicate elements for `i`
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // Initialize two pointers
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    // Sum is too small -> increase value by moving `j` to the right
                    j++;
                } else if (sum > 0) {
                    // Sum is too large -> decrease value by moving `k` to the left
                    k--;
                } else {
                    // Found a triplet summing to 0
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    // Skip duplicate elements for `j`
                    while (j < k && nums[j] == nums[j - 1]) j++;

                    // Skip duplicate elements for `k`
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        return ans;
    }
};