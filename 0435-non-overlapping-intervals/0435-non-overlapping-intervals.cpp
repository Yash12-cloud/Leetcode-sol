bool cmp(vector<int> &a,vector<int> &b){
    return a[1] < b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();

        sort(intervals.begin(),intervals.end(),cmp);

        int lastendtime = intervals[0][1];

        int ans = 0;

        for(int i =  1; i < n; i++){
            if(intervals[i][0] < lastendtime){ // overlapping or not
                ans++;
            }
            else{
                lastendtime = intervals[i][1];
            }
        }
        return ans;
    }
};