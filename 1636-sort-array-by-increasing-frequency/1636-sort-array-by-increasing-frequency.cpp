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
            //freq ko key banaya and key ko value
            // heap phale pair ka 1st element ko compare krta hai agar vo same hua tab sencond ko compare krega
            pq.push({p.second, -p.first});//-p.first isliya liya kyuki humko descend order ma cheya 
            // 3>2 isliya 2 wala heap ma top ma rahega aur uski hi freq phale ans array ma jaygi usko rokne kaliya humne dono ko -ve krdiya ab -3<-2 tho -3 top ma rahega jab dono ki freq same hogi
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