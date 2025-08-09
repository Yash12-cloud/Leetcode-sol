class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        for(int i = sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        queue<int> q;
        for(int i = 0;i < students.size();i++){
            q.push(students[i]);
        }

        bool flag = true;
        int num_push = 0;
        while(flag){
            if(st.size() == 0) break;
            if(st.top() == q.front()){
                st.pop();
                q.pop();
                num_push = 0;
            }
            else{ // st.top() != q.front()
                if(num_push == q.size()){
                    flag = false;
                }
                q.push(q.front());
                q.pop();
                num_push++;
            }

        }
        return q.size();
    }
};