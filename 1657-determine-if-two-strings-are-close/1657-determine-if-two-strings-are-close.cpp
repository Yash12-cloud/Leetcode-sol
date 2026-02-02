class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        int n = word1.size();
        unordered_map<char,int> s1;
        unordered_map<char,int> s2;
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;
        for(int i = 0 ;i < n; i++){
            s1[word1[i]]++;
            s2[word2[i]]++;
        }

        for(auto x : s1){
            if(s2.find(x.first) == s2.end()) return false;
        }
        for(auto x : s1){
            freq1[x.second]++;
        }
        for(auto x : s2){
            freq2[x.second]++;
        }
        if(freq1 == freq2) return true;
        else return false;
    }
};