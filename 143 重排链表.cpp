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
#include <list>
using namespace std;


struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return ;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next&&fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        };
        ListNode *p=slow->next;
        ListNode* dummy=new ListNode(0);
        while(p){
            ListNode* tmp=p->next;
            p->next=dummy->next;
            dummy->next=p;
            p=tmp;
        }
        ListNode* l2=dummy->next;
        while(head!=slow){
            ListNode* tmp1=head->next;
            ListNode* tmp2=l2->next;
            l2->next=head->next;
            head->next=l2;
            head=tmp1;
            l2=tmp2;
        }
        head->next=l2;
    }
};
int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


