class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 != 0) return false;
        stack<char> st1; // for ()

        for(int i = 0;i<s.size();i++){
            if(s[i]=='(') st1.push(s[i]);
            else if(s[i] == '{') st1.push(s[i]);
            else if(s[i] == '[') st1.push(s[i]);

            if(s[i]==')'){
                if(st1.size()==0) return false;
                else if(st1.top()=='('){
                    st1.pop();
                }
                else return false;//"([}}])" for this testcase
            }
            else if(s[i]=='}'){
                if(st1.size()==0) return false;
               else if(st1.top()=='{') {
                st1.pop();
               }
               else return false;//"([}}])" --//--
            }
            else if(s[i]==']'){
                if(st1.size()==0) return false;
                else if(st1.top()=='['){
                    st1.pop();
                }
                else return false;//"([}}])" --//--
            }
        }
        if(st1.size()==0) return true;
        else return false;
    }
};