class MyStack {
    queue<int>q1,q2;
public:
    MyStack() {
    }
    
    void push(int x) {
         while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }   
    }
    
    int pop() {
        int t=q1.front();
        q1.pop();
        return t;
    }
    
    int top() {
        if(q1.empty())
        return -1;
        return q1.front();
    }
    
    bool empty() {
        if(q1.empty())
        return true;
        return false;
    }
};
