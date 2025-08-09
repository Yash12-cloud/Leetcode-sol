class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1) return true;
        int x = 1;
        int num = INT_MIN;
        while(num < n){
           num = 1 << x;
            x++;
        }
        if(num == n) return true;
        else return false;
    }
};