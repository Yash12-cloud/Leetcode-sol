class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();

        vector<int> vec(501,0);
        int n2=vec.size();

        for(int i=0;i<n;i++){
            for(int j=1;j<n2;j++){
                if(arr[i]==j){
                    vec[j]++;
                    break;
                }
            }
        }
        for(int i = n;i>=1;i--){
            if(vec[i]==i){
                return i;
            }
        }
        return -1;
    }
};