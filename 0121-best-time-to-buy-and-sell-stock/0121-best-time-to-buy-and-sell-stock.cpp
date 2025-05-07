class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};




// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int profit = 0;
//         int bp=0,sp=0;
        
//         for(int i = 0;i<n-1;i++){
//            bp=prices[i];
//            sp=prices[i+1];
//            if
//            }
//         }
//         if(profit<0) return 0;
//             //profit = max(sum,profit);
//         else return profit;
//    }
// };





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
 
