class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;

        int n = arr.size();
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
        }
        for(auto p : m){
            if(s.find(p.second) != s.end()) return false;
            else s.insert(p.second);
        }
        return true;
    }
};