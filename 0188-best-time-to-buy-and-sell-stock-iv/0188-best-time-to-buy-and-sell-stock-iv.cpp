class Solution {
public:
    // dp[i][k][on]
    // i   = current day
    // k   = kitne transactions bache hain
    // on  = 1 -> abhi stock hold kar rahe hain
    //       0 -> abhi stock hold nahi kar rahe

    int dp[1005][105][2];

    int f(vector<int>& prices, int i, int k, bool on) {

        // Agar saare days khatam ho gaye
        if (i == prices.size())
            return 0;

        // Agar ye state pehle calculate ho chuki hai
        if (dp[i][k][on] != -1)
            return dp[i][k][on];

        int ans = INT_MIN;

        // Option 1: Aaj kuch nahi karna
        // Seedha next day par chale jao
        ans = f(prices, i + 1, k, on);

        if (on) {

            // Abhi stock hamare paas hai
            // Option 2: Aaj stock SELL kar do
            //
            // prices[i] -> selling se paisa milega
            // k - 1     -> ek transaction complete ho gayi
            ans = max(ans,
                      prices[i] + f(prices, i + 1, k - 1, false));

        } else {

            // Abhi hamare paas stock nahi hai
            // Agar transaction available hai toh BUY kar sakte hain
            if (k > 0) {

                // prices[i] -> stock kharidne mein paisa jayega
                // Isliye -prices[i]
                //
                // true -> ab stock hamare paas hai
                ans = max(ans,
                          f(prices, i + 1, k, true) - prices[i]);
            }
        }

        // Answer ko DP table mein store kar do
        return dp[i][k][on] = ans;
    }

    int maxProfit(int k, vector<int>& prices) {

        // Starting mein saari DP values -1
        memset(dp, -1, sizeof(dp));

        // Day 0 se start
        // k transactions available
        // Starting mein koi stock nahi hai -> false
        return f(prices, 0, k, false);
    }
};