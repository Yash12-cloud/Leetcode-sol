class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        int n = arr.size();
        unordered_map<string,vector<string>> mp;
        // for(auto x : arr){
        //     sort(x.begin(),x.end());
        //     mp[x];
        // }
        for(auto x : arr){
            auto p = x;
            sort(x.begin(),x.end());
            mp[x].push_back(p);
        }
        vector<vector<string>> ans;
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};