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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return nullptr;
        int count=1;
        ListNode *phead=new ListNode(0);
        phead->next=head;
        ListNode *p=phead;
        while(head->next!=nullptr){
            if(head->val!=head->next->val&&count==1){
                p=p->next;
                head=head->next;
                count=1;
            }else if(head->val!=head->next->val&&count>1){
                p->next=head->next;
                head=head->next;
                count=1;
            }else if(head->val==head->next->val){
                head=head->next;
                count++;
            }
        }
        if(count==1) return phead->next;
        else{
            p->next= nullptr;
            return phead->next;
        }
        return phead->next;

    }
};
int main() {
    Solution s;
    ListNode *p1=new ListNode(1);
    ListNode *p2=new ListNode(1);
    ListNode *p3=new ListNode(1);
    ListNode *p4=new ListNode(2);
    ListNode *p5=new ListNode(3);
    p1->next=p2;p2->next=p3;//p3->next=p4;p4->next=p5;
    ListNode *p=s.deleteDuplicates(p1);
    while(p!= nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }

    
}

