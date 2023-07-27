struct Node{
    int data;
    Node* next;
};
class MyQueue {
public:
    MyQueue() {
        size = 0;
        head = NULL;
        tail = NULL;
    }
    
    void push(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;
        if(size == 0){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        
        size++;
    }
    
    int pop() {
        int retValue;
        if(size == 0){
            // emptyQueue
            // "All the calls to pop and peek are valid."
        }
        else if(size == 1){
            retValue = head->data;
            delete head;
            head = NULL;
            tail = NULL;
        }
        else{
            Node* oldNode = head;
            head = head->next;
            retValue = oldNode->data;
            delete oldNode;
        }
        size--;
        return retValue;
    }
    
    int peek() {
        return head->data;
    }
    
    bool empty() {
        return (size == 0);
    }
private:
    int size;
    Node* head;
    Node* tail;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */