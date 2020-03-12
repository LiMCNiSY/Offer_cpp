/*

������ջʵ��һ�����С����е��������£���ʵ�������������� appendTail �� deleteHead ���ֱ�����ڶ���β�������������ڶ���ͷ��ɾ�������Ĺ��ܡ�(��������û��Ԫ�أ�deleteHead?�������� -1 )

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
