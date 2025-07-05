class Solution {
public:
    int Prime(int n){
        if(n == 1) return 0;
        for(int i = 2 ; i <= sqrt(n) ; i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int rows = nums.size();
        int col = nums[0].size();

        int max_Prime = 0;

        int isPrime_1 = 0;
        int isPrime_2 = 0;

        for(int i = 0 ; i < rows ; i++){

            isPrime_1 = Prime(nums[i][i]);

            isPrime_2 = Prime(nums[i][col-1-i]);

            if(isPrime_1 == 1){
                max_Prime = max(max_Prime,nums[i][i]);
            }
            if(isPrime_2 == 1){
                max_Prime = max(max_Prime,nums[i][col-1-i]);
            }

        }
        return max_Prime;
    }
};