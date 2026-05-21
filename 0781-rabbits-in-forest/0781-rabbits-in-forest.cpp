class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> m;
        int ans = 0;
        for(int i = 0;i<answers.size(); i++){
            m[answers[i]]++;
        }
        for(auto mp : m){
            while(mp.second != 0){
                if(mp.second <= (mp.first + 1)){
                    mp.second = 0;
                }   
                else{
                    mp.second -= mp.first + 1; 
                }
                ans += mp.first + 1;
            }
        }
       return ans;;
    }
};