class Solution {
public:
    int smallestNumber(int n) {
        int x=1;
        if(n==1) return x;
        for(int i = 0; i<n; i++){
            if(x>n) break;
            x = x*2;
        }
        return x-1;
    }
};