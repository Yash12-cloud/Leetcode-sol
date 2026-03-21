class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        priority_queue< pi,vector<pi>,greater<pi> > pq; // min heap

        for(auto p : nums){
            m[p]++;
        }
        for(auto p : m){
            pq.push({p.second, -p.first});//freq ko key banaya and key ko value
        }
        vector<int> ans;
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            for(int i = 0; i < top.first; i++){ //loop chalaya taki ma uski freq utna loop chala saku pushback krne ko
                ans.push_back(-top.second);
            }
        }
        return ans;
    }
};