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
    ListNode* sortList(ListNode* head) {
        ListNode* phead=new ListNode(0);
        phead->next=head;
        ListNode* p=head;
        int len=0;
        while(p){
            len++;
            p=p->next;
        }
        for(int size=1;size<len;size=size*2){
            auto cur=phead->next;
            auto tail=phead;
            while(cur){
                auto left=cur;
                auto right=cut(left,size);
                cur=cut(right,size);
                tail->next=merge(left,right);
                while(tail->next){
                    tail=tail->next;
                }
            }
        }
        return phead->next;
    }
    ListNode* cut(ListNode*head,int n){
        auto p=head;
        while(--n&&p){
            p=p->next;
        }
        if(!p){
            return NULL;
        }
        auto next=p->next;
        p->next=NULL;
        return next;

    }
    ListNode* merge(ListNode* p1,ListNode*p2){
        ListNode* phead=new ListNode(0);
        ListNode* p=phead;
        while(p1&&p2){
            if(p1->val<p2->val){
                p->next=p1;
                p1=p1->next;
                p=p->next;
            }else{
                p->next=p2;
                p2=p2->next;
                p=p->next;
            }
        }
        p->next=p1?p1:p2;
        return phead->next;
    }
};
int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


