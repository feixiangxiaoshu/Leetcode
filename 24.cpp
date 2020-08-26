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
    ListNode* swapPairs(ListNode* head) {
        if(head== nullptr||head->next==nullptr)
            return head;
        ListNode* p1=head;
        ListNode* p2=head->next;
        p1->next=swapPairs(p2->next);
        p2->next=p1;

        return p2;

    }
};
int main(){
    Solution s;
    vector<string> res;
    ListNode *p1=new ListNode(1);
    ListNode *p2=new ListNode(2);
    ListNode *p3=new ListNode(3);
    ListNode *p4=new ListNode(4);

    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    ListNode *tmp=s.swapPairs(p1);
    while(tmp!= nullptr){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }





}
