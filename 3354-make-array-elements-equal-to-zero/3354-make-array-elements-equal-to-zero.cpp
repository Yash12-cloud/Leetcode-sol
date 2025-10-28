class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<int> number = nums;
       int count = 0;
       int dir = 0;//right
        int curr;
        //finding 0 from end
        for(int i = nums.size()-1; i>=0; i--){
            if(nums[i] == 0){
                curr = i;
                break;
            }
        }
        int newcurr = curr;
        //moving right
        while(curr >= 0 && curr < nums.size()){
            if(nums[curr] == 0){
                if(dir == 0) curr++;
                else curr--;
                continue;
            }
            if(nums[curr] > 0){
                nums[curr]--;
                if(dir == 0){
                    dir = 1;
                    curr--;
                }
                else {
                    dir = 0;
                    curr++;
                }
            }
        }
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
        }
        if(sum == 0) count++;

        //moving left
        nums = number;
        dir = 1;
        curr = newcurr;
        while(curr >= 0 && curr < nums.size()){
            if(nums[curr] == 0){
                if(dir == 0) curr++;
                else curr--;
                continue;
            }
            if(nums[curr] > 0){
                nums[curr]--;
                if(dir == 0){
                    dir = 1;
                    curr--;
                }
                else {
                    dir = 0;
                    curr++;
                }
            }
        }
        sum = 0;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
        }
        if(sum == 0) count++;

        return count;
    }
};