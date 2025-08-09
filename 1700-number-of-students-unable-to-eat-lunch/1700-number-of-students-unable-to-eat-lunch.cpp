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
        int num_push = 0;
        while(q.size()>0 && num_push != q.size()){
            if(st.size() == 0) break;
            if(st.top() == q.front()){
                st.pop();
                q.pop();
                num_push = 0;
            }
            else{ // st.top() != q.front()
                q.push(q.front());
                q.pop();
                num_push++;
            }
        }
        return q.size();
    }
};

// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
//         int ones = 0, zeros = 0;
        
//         for (int s : students) {
//             if (s == 1) ones++;
//             else zeros++;
//         }

//         for (int s : sandwiches) {
//             if (s == 1) {
//                 if (ones == 0) return zeros;
//                 ones--;
//             } else {
//                 if (zeros == 0) return ones;
//                 zeros--;
//             }
//         }

//         return 0; // All students are served
//     }
// };