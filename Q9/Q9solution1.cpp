/*

用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，分别完成在队列尾部插入整数和在队列头部删除整数的功能。(若队列中没有元素，deleteHead?操作返回 -1 )

*/

class CQueue {
public:
    stack<int> a;
    stack<int> b;
    CQueue() {

    }
    
    void appendTail(int value) {
        a.push(value);
    }
    
    int deleteHead() {
        while(!a.empty()){
            b.push(a.top());
            a.pop();
        }
        int ret = -1;
        if(!b.empty()) {
            ret = b.top();
            b.pop();
        }
        while(!b.empty()){
            a.push(b.top());
            b.pop();
        }
        return ret;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
