class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = gain[0];
        int i = 1;

        while(i < gain.size()){
            gain[i] = gain[i-1] + gain[i];
            maxAlt = max(maxAlt,gain[i]);
            i++;
        }

        return max(maxAlt,0);
    }
};