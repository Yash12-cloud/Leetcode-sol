class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int x =strs.size();
        if(x==1) return strs[0];
        sort(strs.begin(),strs.end());
            string s=strs[0];
            string s1=strs[x-1];
            char ch;
            string res="";
           for(int i=0;i<(min(s.size(),s1.size()));i++){
            if(s[i]==s1[i]){
                res+=s[i];
            }
            else return res;
           }
            return res;          
    }
};