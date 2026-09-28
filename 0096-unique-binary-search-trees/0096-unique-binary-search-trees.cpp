class Solution {
public:
int f(int n) {
        if (n == 0 || n == 1)
            return 1;

        if (n == 2)
            return 2;

        int sum = 0;

        for (int k = 1; k <= n; k++) {
            // k = potential root
            sum += f(k - 1) * f(n - k); // agar k as a root hua tho total possible number of bst batayega
        }

        return sum;
    }
    int numTrees(int n) {
        return f(n);
    }
};