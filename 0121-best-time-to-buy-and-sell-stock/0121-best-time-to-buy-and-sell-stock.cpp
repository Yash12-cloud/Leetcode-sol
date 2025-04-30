class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = INT_MIN;
        int sum = 0;
        int minIdx= -1,maxIdx= -1;
        
        for(int i = 0;i<n-1;i++){
           for(int j = i+1;j<n;j++){
            sum = -(prices[i]);
            sum += prices[j];
            profit = max(sum,profit);
           }
        }
        if(profit<0) return 0;
            //profit = max(sum,profit);
        else return profit;
   }
};





        // int price;
        // int minPrice = INT_MAX, maxPrice = INT_MIN;
        // int minIdx=0, maxIdx = 0;
        // for(int i =0; i<n-1;i++){
        //     if(prices[i]<minPrice){
        //         minPrice = min(prices[i],minPrice);
        //         minIdx = i;
        //     }
        // }

        // for(int i =minIdx; i<n;i++){
        //     if(prices[i]>maxPrice){
        //         maxPrice = max(prices[i],maxPrice);
        //         maxIdx = i;
        //     }
        // }
        // int profit = prices[maxIdx] - prices[minIdx];
        // return profit;
 
