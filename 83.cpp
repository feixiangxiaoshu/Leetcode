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
        if(head== nullptr) return nullptr;
        ListNode *p=head;
        ListNode *phead=new ListNode(0);
        phead->next=head;
        while(p->next!= nullptr){
            if(p->next->val==p->val){
                p->next=p->next->next;
            } else{
                p=p->next;
            }
        }
        return head;
    }
};
int main() {
    Solution s;
    
}

