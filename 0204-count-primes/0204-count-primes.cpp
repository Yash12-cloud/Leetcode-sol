class Solution {
public:
    int countPrimes(int n) {

        vector<bool> v(n+1,1);

        int count=0;

        v[1] = 0;

        for(int i = 2 ; i <= sqrt(n) ; i++){
            if(v[i] == 1){
                int j = i+i;
                while(j<=n){
                    v[j] = 0;
                    j +=i;
                }
            }
        }

        for(int i = 2;i<v.size()-1;i++){
            if(v[i] == 1){
                count++;
            }
        }
        return count;
    }
};