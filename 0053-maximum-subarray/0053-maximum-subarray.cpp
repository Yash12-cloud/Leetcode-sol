class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum =0, maxSum = INT_MIN;
        int i=0;
        while(i<n){
            sum += nums[i];
            maxSum = max(maxSum,sum);
            if(sum < 0){
                sum=0;
                i++;
            }
            else i++;
            
        }
        return maxSum;
    }
};


















        // int n = nums.size();
        // if(n==1) return nums[0];
        // int maxSum=INT_MIN,sum=0;
        // for(int i=0;i<n;i++){
        //     sum = nums[i];
        //     for(int j=i+1;j<n;j++){
        //         maxSum = max(sum,maxSum);
        //         sum=sum+nums[j];
        //     }
        //     maxSum = max(sum,maxSum);
        // }
        // return maxSum;
