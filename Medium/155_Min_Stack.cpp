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


// Method - 2

class MinStack {
public:
    stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()) st.push({value,value});
        else{
            int mini = min(value,st.top().second);
            st.push({value,mini});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

// Method - 3
class MinStack {
public:

    stack<long long int> st;
    long long int mini;

    MinStack() {
        
    }
    
    void push(int value) {

        if(st.empty()){
            st.push(value);
            mini = value;
        } 
        else{
            if(value < mini){
                st.push((long long)2*value - mini);
                mini = value;
            }
            else st.push(value);
        }
    }
    
    void pop() {
        if(st.top() < mini){
            mini = (long long) 2*mini - st.top();
        }
        st.pop();
    }
    
    int top() {
        if(st.top() < mini) return mini;
        return st.top();
    }
    
    int getMin() {
        return mini;
    }
};


