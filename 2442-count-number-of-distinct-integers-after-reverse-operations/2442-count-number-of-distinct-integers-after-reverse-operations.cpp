class Solution {
public:
int reverse(int num){
    int r = 0;
    while(num>0){
        r *=10;
        r += (num%10);
        num /=10;
    }
    return r;
}
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i<nums.size();i++){
            // we will reduce T.C by not inserting reverse number back to array and directly adding it to set with nums[i]
            s.insert(nums[i]);   
            s.insert(reverse(nums[i]));
        }
        return s.size();
    }
};