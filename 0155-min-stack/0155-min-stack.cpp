class MinStack {
public:
    struct pair{
        int cur;
        int min;
        pair(int cur,int min){
            this->cur=cur;
            this->min=min;
        }
    };
    stack<pair>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(!st.empty()){
            int minval=min(val,st.top().min);
            st.push(pair(val,minval));
        }
        else{
            st.push(pair(val,val));
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().cur;
    }
    
    int getMin() {
        return st.top().min;
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