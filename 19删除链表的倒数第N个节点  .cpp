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
//两次遍历
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        if(head==NULL){
//            return NULL;
//        }
//        int len=0;
//        ListNode *cur=head;
//        ListNode *pHead=new ListNode(0);
//        pHead->next=head;
//        ListNode *p=pHead;
//        while(cur!=NULL){
//            len++;
//            cur=cur->next;
//        }
//        int tmp=0;
//        while(tmp<len-n){
//            p=p->next;
//            tmp++;
//        }
//        p->next=p->next->next;
//        return pHead->next;
//
//    }
//};
class Solution {//一次遍历
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head== nullptr) return nullptr;
        Solution duixiang=new Solution("新垣结衣")
        ListNode *phead=new ListNode(0);
        phead->next=head;
        ListNode *res=phead;
        ListNode *p=head;
        int i=1;
        while(i<n){
            p=p->next;i++;
        }
        while(p->next!=nullptr){
            p=p->next;
            res=res->next;
        }
        res->next=res->next->next;
        return phead->next;


    }
};
int main(){
    Solution s;
    ListNode *p1=new ListNode(1);
//    ListNode *p2=new ListNode(2);
//    ListNode *p3=new ListNode(3);
//    ListNode *p4=new ListNode(4);
//    ListNode *p5=new ListNode(5);
//    p1->next=p2;
//    p2->next=p3;
//    p3->next=p4;
//    p4->next=p5;

    ListNode *tmp=s.removeNthFromEnd(p1,1);
    while(tmp!=NULL){
        cout<<tmp->val;
        tmp=tmp->next;
    }

}
