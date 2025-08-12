class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();

        sort(deck.begin(),deck.end());

        queue<int> q;
        //it contain the index of ans array that need to be filled by the pattern
        for(int i = 0;i<n;i++){
            q.push(i);
        }

        vector<int> ans(n);
        int i = 0;
        while(q.size()>0){
            ans[q.front()] = deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
            i++;
        }
        return ans;
    }
};