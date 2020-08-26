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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(m==n) return head;
        ListNode *phead=new ListNode(0);
        phead->next=head;
        ListNode *p=phead;
        for(int i=1;i<m;i++){
           p=p->next;
        }
        ListNode *mNode=p->next;
        ListNode *nextNode;ListNode*preNode;
        for(int i=m;i<=n;i++){
            nextNode=mNode->next;
            mNode->next=preNode;
            preNode=mNode;
            mNode=nextNode;
        }
        p->next->next=nextNode;
        p->next=preNode;
        return phead->next;
    }
};
int main() {
    Solution s;
    ListNode *p1 = new ListNode(1);
    ListNode *p2 = new ListNode(2);
    ListNode *p3 = new ListNode(3);
    ListNode *p4 = new ListNode(4);
    ListNode *p5 = new ListNode(5);
    ListNode *p6 = new ListNode(6);
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p5;
    p5->next = p6;
    ListNode *p = s.reverseBetween(p1, 3, 5);
    while (p != NULL) {
        cout << p->val << " ";
        p = p->next;
    }
}


