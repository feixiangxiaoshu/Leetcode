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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
        ListNode *p1=new ListNode(0);
        p1->next=head;
        ListNode *phead=p1;
        ListNode *p2=new ListNode(0);
        ListNode *phead2=p2;
        while(p1->next!= nullptr){
            if(p1->next->val<x){
                p1=p1->next;
            }else{
                p2->next=p1->next;
                p2=p2->next;
                p1->next=p1->next->next;
            }
        }
        p2->next=NULL;
        p1->next=phead2->next;
        return phead->next;
    }
};
int main() {
    int arr[6]={1,4,3,2,5,2};
    ListNode *p1=new ListNode(1);
    ListNode *p2=new ListNode(4);
    ListNode *p3=new ListNode(3);
    ListNode *p4=new ListNode(2);
    ListNode *p5=new ListNode(5);
    ListNode *p6=new ListNode(2);
    p1->next=p2;p2->next=p3;p3->next=p4;p4->next=p5;p5->next=p6;
    Solution s;
    ListNode*p=s.partition(p1,3);
    while(p!=NULL){
        cout<<p->val<<" ";
        p=p->next;
    }

    
}

