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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return nullptr;
        int len=0;
        ListNode *p=head;
        ListNode *q=head;
        ListNode* phead=new ListNode(0);
        phead->next=head;
        while(p->next!=nullptr){
            len++;
            p=p->next;
        }
        len++;
        int step=len-k%len;
        if(step==0) return head;
        p->next=q;
        while(step>1) {
            head = head->next;
            step--;
        }

        phead->next=head->next;
        head->next= nullptr;
        return phead->next;

    }
};
int main() {
    Solution s;
    ListNode*p1=new ListNode(1);
    ListNode* p2=new ListNode(2);
    ListNode* p3=new ListNode(3);
    ListNode* p4=new ListNode(4);
    ListNode* p5=new ListNode(5);
    p1->next=p2;p2->next=p3;p3->next=p4;p4->next=p5;
    ListNode *res=s.rotateRight(p1,0);
    while(res!=nullptr){
        cout<<res->val;
        res=res->next;
    }

}
