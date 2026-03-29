class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue< int,vector<int>,greater<int> > pq;
        int sum = 0;
        int temp = 0;

        for(auto x : nums){
            pq.push(x);
        }
        while(k>0){
            temp = pq.top();
            pq.pop();
            temp = -(temp);
            pq.push(temp); 
            k--;
        }
        while(pq.size()>0){
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};