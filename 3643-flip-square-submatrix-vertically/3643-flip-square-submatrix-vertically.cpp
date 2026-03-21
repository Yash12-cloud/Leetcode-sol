class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {

        for(int p = y; p < y+k; p++){
            int i = x;
            int j = x+k-1;
            while(i<j){
                swap(grid[i][p],grid[j][p]);
                i++;
                j--;
            }
        }
        return grid;
    }
};