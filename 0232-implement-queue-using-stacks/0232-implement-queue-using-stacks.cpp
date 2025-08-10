class MyQueue {
public:
stack<int> st;
stack<int> helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        int p = helper.top();
        helper.pop();
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return p;
    }
    
    int peek() {
       while(st.size()>0){
        helper.push(st.top());
        st.pop();
       }
       int p = helper.top();
       while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
       }
       return p;
    }
    
    bool empty() {
        if(st.size() == 0) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */