class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // without heap O(n2 log n)
        while(stones.size() > 1){
            sort(stones.begin(),stones.end());
            int temp1 = stones[stones.size()-1];
            stones.pop_back();
            int temp2 = stones[stones.size()-1];
            stones.pop_back();
            int x = min(temp1,temp2) ;
            int y = max(temp1,temp2);
            
            stones.push_back(y-x);
        }
        return stones[0];

    }
};