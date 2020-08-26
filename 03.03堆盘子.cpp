//
// Created by Administrator on 2020/6/23.
//

class StackOfPlates {
private:
    vector<stack<int> > sta;
    int cap;

public:
    StackOfPlates(int cap) {
        this->cap=cap;
    }

    void push(int val) {
        if(cap==0) return;
        if(sta.size()==0||sta[sta.size()-1].size()==cap){
            stack<int> tmp;
            tmp.push(val);
            sta.push_back(tmp);
        }else{
            sta[sta.size()-1].push(val);
        }
    }

    int pop() {
        if(sta.size()==0) return -1;
        int res=sta[sta.size()-1].top();
        sta[sta.size()-1].pop();
        if(sta[sta.size()-1].empty()){
            sta.pop_back();
        }
        return res;

    }

    int popAt(int index) {
        if(index>sta.size()-1||index<0||sta.empty()) return -1;
        int res=sta[index].top();
        sta[index].pop();
        if(sta[index].empty()){
            sta.erase(sta.begin()+index);
        }
        return res;
    }
};