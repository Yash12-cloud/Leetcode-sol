class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // heaps 
        priority_queue<int> pq; // max heap
        for(auto x : stones){
            pq.push(x);
        }
        int x;
        int y;
        while(pq.size()>1){
            y = pq.top(); // first largest element 
            pq.pop();
            x = pq.top(); // second largest element
            pq.pop();
            pq.push(y-x); // subtract and push
        }
        int ans = pq.top();
        return ans;
        
        
        
        
        
        
        
        // without heap O(n2 log n)
        // while(stones.size() > 1){
        //     sort(stones.begin(),stones.end());
        //     int temp1 = stones[stones.size()-1];
        //     stones.pop_back();
        //     int temp2 = stones[stones.size()-1];
        //     stones.pop_back();
        //     int x = min(temp1,temp2); // hamesha do sabse bhari patthar phale lena hai
        //     int y = max(temp1,temp2);
            
        //     stones.push_back(y-x);
        // }
        // return stones[0];

    }
};