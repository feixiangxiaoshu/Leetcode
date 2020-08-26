//
// Created by Administrator on 2020/6/20.
//

class MinStack {
private:
    stack<int> sta;
    stack<int> helper;
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        if(sta.empty()){
            sta.push(x);
            helper.push(x);
        }else{
            sta.push(x);
            helper.push(min(helper.top(),x));
        }
    }

    void pop() {
        sta.pop();
        helper.pop();
    }

    int top() {
        return sta.top();
    }

    int getMin() {
        return helper.top();
    }
};