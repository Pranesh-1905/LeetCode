class MinStack {
    private:
        vector<int> v;
public:
    MinStack() {
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        if (!v.empty()){
            v.pop_back();
        }
    }
    
    int top() {
        if (!v.empty()){
            return v.back();
        }
        return NULL;
    }
    
    int getMin() {
        if (!v.empty()){
            return *min_element(v.begin(),v.end());
        }
        return NULL;
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