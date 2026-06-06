bool  cmp(vector<int> &a,vector<int> &b){
    return a[1] < b[1];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),cmp);

        int n = intervals.size();
        vector<vector<int> > result;
        result.push_back(intervals[n-1]);
        int j = 0;
        for(int i = n-2;i>=0;i--){
            vector<int> curr = intervals[i];
            if(result[j][0] <= curr[1]){
                result[j][0] = min(curr[0],result[j][0]);
                result[j][1] = max(curr[1],result[j][1]);
            }
            else{
                result.push_back(curr);
                j++;
            }
        }

    return result;
    }
};