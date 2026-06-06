bool cmp(vector<int> &a, vector<int> &b){
    return a[1] < b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        // jitna non overlapping interval hoge utna hi arrow lagege
        // so interval ki condition dheklo kya = consider hai ya nhi
        sort(points.begin(),points.end(),cmp);

        int lastendtime = points[0][1];

        int numOfNonOverlappingInterval = 0;

        for(int i =  1; i < n; i++){
            if(points[i][0] <= lastendtime){ // overlapping or not
                numOfNonOverlappingInterval++;
            }
            else{
                lastendtime = points[i][1];
            }
        }
        return points.size() - numOfNonOverlappingInterval;// total interval - non overlapping interval count 
    }
};