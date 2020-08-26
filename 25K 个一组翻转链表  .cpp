#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        ListNode *tmp=head;
        for(int i=0;i<k;i++){
            if(tmp== nullptr) return head;
            tmp=tmp->next;
        }
        ListNode* phead=new ListNode(0);
        ListNode* p=head;
        ListNode* q;
        phead->next=head;
        for(int i=1;i<k;i++){
            q=p->next;
            p->next=q->next;
            q->next=phead->next;
            phead->next=q;
        }
        p->next=reverseKGroup(p->next,k);
        return phead->next;
    }

};
int main(){
    Solution s;
    vector<string> res;
    ListNode *p1=new ListNode(1);
    ListNode *p2=new ListNode(2);
    ListNode *p3=new ListNode(3);
    ListNode *p4=new ListNode(4);
    ListNode *p5=new ListNode(5);

    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=p5;
    ListNode *tmp=s.reverseKGroup(p1,3);
    while(tmp!= nullptr){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }





}
