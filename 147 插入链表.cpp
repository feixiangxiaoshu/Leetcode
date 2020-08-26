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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *phead=new ListNode(INT_MIN);
        ListNode* p=head;
        ListNode* pre=phead;
        ListNode* tail=phead;
        while(p){
            if(p->val>tail->val){
                tail->next=p;
                p=p->next;
                tail=tail->next;
            }else{
                ListNode* tmp=p->next;
                tail->next=tmp;
                while(pre->next&&pre->next->val<p->val){
                    pre=pre->next;
                }
                p->next=pre->next;
                pre->next=p;
                pre=phead;
                p=tmp;
            }
        }
        return phead->next;
    }
};
int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


