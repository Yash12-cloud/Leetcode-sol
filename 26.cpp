#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int j = 1;
            for(int i = 1; i < nums.size(); i++){//comparing aase kro
                if(nums[i] != nums[i - 1]){
                    nums[j] = nums[i];
                    j++;
                }
            }//
            return j;
        }
    };
int main() {
    Solution s;
    vector<int> nums = {1, 1, 2, 2, 3, 4};
    int newLength = s.removeDuplicates(nums);
    cout << "New length: " << newLength << endl;
    return 0;
}