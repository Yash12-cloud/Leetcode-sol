class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> prepro(n);
        vector<int> sufpro(n);
        //prefix product formation in new array
        prepro[0]=nums[0];
        for(int i = 1; i < n; i++ ){
            prepro[i] = prepro[i-1] * nums[i]; 
        }
        //suffix product formation in new array
        sufpro[n-1] = nums[n-1];
        for(int i = n-2; i>=0 ; i--){
            sufpro[i] = sufpro[i+1] * nums[i];
        }
        //taking both array, i+1 and i-1 number and taking product and putting it in resultant array
        int i = 0;
        int product =1;
        while(i<n){
            if(i == 0){
                product = 1 * sufpro[i+1];
                res[i] = product;
            }
            else if(i == n-1){
                product = prepro[i-1] * 1;
                res[i] = product;
            }
            else{
                product = prepro[i-1] * sufpro[i+1];
                res[i] = product;
            }
            i++;
        }
        return res;
    }
};