//
// Created by Administrator on 2020/6/20.
//

class TripleInOne {
private:
    vector<int> s;
    int stackSize;
    int sp[3];
public:
    TripleInOne(int stackSize) {
        s=vector<int >(stackSize*3,0);
        this->stackSize=stackSize;
        sp[0]=0;
        sp[1]=stackSize;
        sp[2]=stackSize*2;

    }

    void push(int stackNum, int value) {
        if(sp[stackNum]<(stackNum+1)*stackSize){
            s[sp[stackNum]++]=value;
        }
    }

    int pop(int stackNum) {
        int res=-1;
        if(sp[stackNum]>stackNum*stackSize){
            res=s[--sp[stackNum]];
        }
        return res;
    }

    int peek(int stackNum) {
        int res=-1;
        if(sp[stackNum]>stackNum*stackSize){
            res=s[sp[stackNum]-1];
        }
        return res;
    }

    bool isEmpty(int stackNum) {
        return sp[stackNum] == stackNum*stackSize;
    }
};