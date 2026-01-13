class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        // Using  hashmap
        unordered_map<char,int> map1;
        for(int i =0 ; i<s.size();i++){
            map1[s[i]]++;
            map1[t[i]]--;// saat saat ma freq subtract krta rahuga
            //agar element exist nhi krta hoga tho vo create krke map ma daldega
            // aur ya agar element exist krta hoga tho uski frequency 1 sa increment krdega
        }

        for(auto p : map1){
            if(p.second != 0) return false;
        }
        return true;
        



        // Using sorting 
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s == t) return true;
        // else return false;
    }
};