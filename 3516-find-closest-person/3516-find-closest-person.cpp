class Solution {
public:
    int findClosest(int x, int y, int z) {
        auto a1 = abs(x-z);
        auto a2 = abs(y-z);

        if(a1>a2) return 2;
        else if(a1==a2) return 0;
        else return 1;
    }
};