class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i =0; i < n; i++){
            int number = nums[i];
            int digit=0;
            while(number>0){
                number /=10;
                digit++;
            }
            if(digit%2==0){
                count++;
            }
        }
        return count;
    }
};