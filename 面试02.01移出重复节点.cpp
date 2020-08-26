//
// Created by Administrator on 2020/6/16.
//

class Solution {
public:
    ListNode* removeDuplicateNodes(ListNode* head) {
        if(head==NULL) return head;
        unordered_set<int> st;
        ListNode *p=head;
        st.insert(p->val);
        p=p->next;
        ListNode *pre=head;
        while(p){
            if(st.find(p->val)!=st.end()){
                pre->next=p->next;
                p=pre->next;
            }else{
                st.insert(p->val);
                pre=p;
                p=p->next;
            }
        }
        return head;
    }
};