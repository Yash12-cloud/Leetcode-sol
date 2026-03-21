class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto p : nums){
            m[p]++;
        }
        for(auto p : m){
            pq.push({p.second,p.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            ans.push_back(top.second);
            
        }
        return ans;
    }
};