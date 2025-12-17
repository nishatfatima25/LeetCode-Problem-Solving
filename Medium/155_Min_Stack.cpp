// LeetCode Problem : 155. Min Stack
// Link : https://leetcode.com/problems/min-stack/description/

class MinStack {
    stack<int> s,st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(st.empty() || val <= st.top()) st.push(val);
    }
    
    void pop() {
        if(s.top() == st.top()) st.pop();
        s.pop();
    }
    
    int top() {
        if(s.empty()) return -1;
        else return s.top();
    }
    
    int getMin() {
        if(s.empty()) return -1;
        else return st.top();
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
