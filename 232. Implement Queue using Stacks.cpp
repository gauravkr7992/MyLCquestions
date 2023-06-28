class MyQueue {
    stack<int>s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int p=s1.top();
        s1.pop();
        return p;
    }
    
    int peek() {
        int t=s1.top();
        return t;
    }
    
    bool empty() {
        if(s1.empty())
        return true;
        return false;
    }
};
