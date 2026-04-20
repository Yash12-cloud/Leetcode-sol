class Solution {
public:
    int maximumUnits(vector<vector<int>>& arr, int truckSize) {
        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b){// custom function to sort array based on profit (higher to lower)
        return a[1] > b[1];
        });
        // int r=0;
        // for(auto &i:boxTypes){
        //     int take=min(i[0],truckSize);
        //     r+=take*i[1];
        //     truckSize-=take;
        //     if(truckSize==0)break;
        // }
        //return r;
        int profit = 0;
        for(auto x : arr){
            if(truckSize >= x[0]){
                profit += x[0]*x[1];
                truckSize -= x[0];
            }
            else{
                profit += truckSize*x[1];
                truckSize = 0;
            }
            if(truckSize == 0) break;
        }
        return profit;
    }
};