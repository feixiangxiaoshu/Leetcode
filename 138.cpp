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


class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* p=head;
        while(p){ //复制
            Node* tmp=new Node(p->val);
            tmp->next=p->next;
            p->next=tmp;
            p=tmp->next;
        }
        Node* slow=head;
        while(slow){//加random
            if(slow->random){
                slow->next->random=slow->random->next;
            }
            slow=slow->next->next;
        }
      //拆分
        Node* cur=head;
        Node* p2=head->next;
        Node* copy_cur=p2;
        while(copy_cur->next){//拆分
           cur->next=copy_cur->next;
           cur=cur->next;
           copy_cur->next=cur->next;
           copy_cur=copy_cur->next;
        }
        copy_cur->next=NULL;
        cur->next=NULL;
        return p2;

    }
};
int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


