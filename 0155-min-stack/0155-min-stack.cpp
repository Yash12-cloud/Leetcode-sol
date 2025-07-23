class MinStack {
public:
    stack<int> st;
    vector<int> v;
    int minn = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        minn = min(val,minn);
        v.push_back(minn);
    }
    
    void pop() {
        st.pop();
        v.pop_back();
    }
    
    int top() {
       return st.top();
    }
    
    int getMin() {
        return v[v.size()-1];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */