class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue< pair<double , vector<int> > > pq; // hap yaha aasa pair banayage usma distane ko double m store krega aur ek vector ko last ma ans ma push bhi krna hai isliya
        for(auto x : points){
            double dist = sqrt((x[0]*x[0])+(x[1]*x[1]));
            pq.push({dist, {x[0],x[1]} });
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>> ans;
        while(pq.size()>0){
            auto temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        return ans;
    }
};