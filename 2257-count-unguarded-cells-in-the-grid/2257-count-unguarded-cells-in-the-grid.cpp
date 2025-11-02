class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> vec(m,vector<int>(n,0));
        int count = 0;
        for(auto p : walls){
            int r = p[0];
            int c = p[1];
            vec[r][c] = 1;//means wall is present
        }
        //loop for marking guarding position 
        for(auto p : guards){
            int r = p[0];
            int c = p[1];
            vec[r][c] = -1;//guard is present
            //up 
            for(int i = r; i >=0; i--){
                if(vec[i][c] == 1) break;
                else if(vec[i][c] == -1) continue;
                else vec[i][c] = 2;//2 means they are guarded by guard
            }
            //down
            for(int i = r; i < m; i++){
                if(vec[i][c] == 1) break;
                else if(vec[i][c] == -1) continue;
                else vec[i][c] = 2;//2 means they are guarded by guard
            }
            //right 
            for(int i = c; i < n; i++){
                if(vec[r][i] == 1) break;
                else if(vec[r][i] == -1) continue;
                else vec[r][i] = 2;//2 means they are guarded by guard
            }
            //left
            for(int i = c; i >=0; i--){
                if(vec[r][i] == 1) break;
                else if(vec[r][i] == 1) continue;
                else vec[r][i] = 2;//2 means they are guarded by guard
            }
        }

        for(int i =0;i<m;i++){
            for(int j = 0; j < n; j++){
                if(vec[i][j] == 0) count++;
            }
        }
        return count;
    }
};