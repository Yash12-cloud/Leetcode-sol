class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
     priority_queue<pair<int,int>> pq;
     for(auto p : arr){
        pq.push({abs(x-p),p});
        if(pq.size()>k) pq.pop();
     }
     vector<int> ans;
     while(pq.size()>0){
        auto p = pq.top();
        pq.pop();
        ans.push_back(p.second);
     }
     sort(ans.begin(),ans.end());
     return ans;
    }
};