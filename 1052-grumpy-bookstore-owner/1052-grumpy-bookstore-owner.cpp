class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n = customers.size();
        if(n==1) return customers[0];
        
        int currLoss = 0;
        int maxLoss = INT_MIN;

        int idx1 = -1;
        int idx2 = -1;

        int i = 0;
        while(i < minutes){
            currLoss += (customers[i] * grumpy[i]); 
            i++;
        }

        i = 1;
        int j = minutes;

        while(j < n){
            currLoss += (customers[j] * grumpy[j]) - (customers[i-1] * grumpy[i-1]);

            if(maxLoss < currLoss){
                maxLoss = currLoss;
                idx1 = i;
                idx2 = j;
            }

            i++;
            j++;
        }
        if(idx1 && idx2 != -1){
            for(int k = idx1; k <= idx2; k++){
                grumpy[k] = 0;
            }
        }

        int sum = 0;
        for(int k = 0; k < n; k++){
            if(grumpy[k] == 0){
            sum += customers[k] ;
            }
        }
        return sum;
    }
};