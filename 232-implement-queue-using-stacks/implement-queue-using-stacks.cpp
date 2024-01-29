class MyQueue {
private:
    stack<int> mainStack;
    stack<int> tempStack;

    void moveStack(stack<int> &src, stack<int> &dest) {
        while (!src.empty()) {
            dest.push(src.top());
            src.pop();
        }
    }
public:
    MyQueue() {}
    
    void push(int x) {
        mainStack.push(x);
    }
    
    int pop() {
        int temp;
        this->moveStack(this->mainStack, this->tempStack);
        temp = this->tempStack.top();
        this->tempStack.pop();
        this->moveStack(this->tempStack, this->mainStack);
        return temp;
    }
    
    int peek() {
        int temp;
        this->moveStack(this->mainStack, this->tempStack);
        temp = this->tempStack.top();
        this->moveStack(this->tempStack, this->mainStack);
        return temp;
    }
    
    bool empty() {
        return this->mainStack.empty();
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