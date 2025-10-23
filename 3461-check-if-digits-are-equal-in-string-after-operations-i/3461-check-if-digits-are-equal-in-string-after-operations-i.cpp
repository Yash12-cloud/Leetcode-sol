class Solution {
public:
    bool hasSameDigits(string s) {
        string copy_str = s;
        while(copy_str.size() > 2){
            string newstr = "";
            int i = 0;
            int j = i+1;
            while(j<copy_str.size()){
                int ans = (copy_str[i]-'0' + copy_str[j]-'0') % 10;
                newstr += (char)(ans + '0');
                i++;
                j++;
            }
            copy_str = newstr;
        }
        if(copy_str[0] != copy_str[1]) return false;
        else return true;
    }
};