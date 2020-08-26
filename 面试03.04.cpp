//
// Created by Administrator on 2020/6/20.
//

class MyQueue {
private:
    stack<int> sta1;
    stack<int> sta2;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    /** Push element x to the back of queue. */
    void push(int x) {
        sta1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int val=peek();
        sta2.pop();
        return val;
    }

    /** Get the front element. */
    int peek() {
        if(sta2.empty()) {
            while(!sta1.empty()){
                sta2.push(sta1.top());
                sta1.pop();
            }
        }
        return sta2.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return sta1.empty()&&sta2.empty();
    }
};