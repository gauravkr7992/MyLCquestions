
class MyCircularQueue {
    int *q;
    int front=-1,rear=-1;
    int size=0;
    int capacity;
public:
    MyCircularQueue(int k) {
        q=new int[k];
        capacity=k;
    }
    
    bool enQueue(int value) {
        if(size==capacity) return false;
        if(front==-1) front=rear=0;
        else rear=(rear+1)%capacity;
        q[rear]=value;
        size++;
        return true;
        
    }
    
    bool deQueue() {
        if(size==0) return false;
        front=(front+1)%capacity;
        size--;
        return true;
    }
    
    int Front() {
        if(size==0) return -1;
        return q[front];
    }
    
    int Rear() {
        if(size==0) return -1;
        return q[rear];
    }
    
    bool isEmpty() {
        return (size==0);
    }
    
    bool isFull() {
        return (size==capacity);
    }
};
