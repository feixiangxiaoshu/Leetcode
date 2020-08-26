//
// Created by Administrator on 2020/6/19.
//

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> sta1;
        stack<ListNode*> sta2;
        if(headA==NULL||headB==NULL) return NULL;
        while(headA){
            sta1.push(headA);
            headA=headA->next;
        }
        while(headB){
            sta2.push(headB);
            headB=headB->next;
        }
        ListNode *res=NULL;
        while(!sta1.empty()&&!sta2.empty()&&sta1.top()==sta2.top()){
            res=sta1.top();
            sta1.pop();
            sta2.pop();
        }
        return res;
    }
};