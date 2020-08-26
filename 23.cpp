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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*p=NULL;
        ListNode*phead=NULL;
        for(int i=0;i<lists.size();i++){
            p=mergeTwoLists(p,lists[i]);
        }
        return p;


    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p=new ListNode(0);
        ListNode *phead=p;
        if(l1== nullptr) return l2;
        if(l2== nullptr) return l1;
        while(l1!= nullptr){
            if(l2!= nullptr){
                if(l1->val<=l2->val){
                    p->next=l1;
                    l1=l1->next;
                    p=p->next;
                }else{
                    p->next=l2;
                    l2=l2->next;
                    p=p->next;
                }
            }else{
                p->next=l1;
                l1=l1->next;
                p=p->next;
            }
        }
        if(l2!= nullptr) p->next=l2;
        return phead->next;
    }
};
int main(){
    Solution s;
    vector<string> res;
    ListNode *p1=new ListNode(-9);
    ListNode *p2=new ListNode(3);
    ListNode *p3=new ListNode(1);

    ListNode *p4=new ListNode(5);
    ListNode *p5=new ListNode(7);
    p1->next=p2;

    p3->next=p4;
    p4->next=p5;
    ListNode *tmp=s.mergeTwoLists(p1,p3);
    while(tmp!= nullptr){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }





}


class Solution {
public ListNode mergeKLists(ListNode[] lists) {
        if (lists == null || lists.length == 0) return null;
        PriorityQueue<ListNode> queue = new PriorityQueue<>(lists.length, new Comparator<ListNode>() {
            @Override
            public int compare(ListNode o1, ListNode o2) {
                if (o1.val < o2.val) return -1;
                else if (o1.val == o2.val) return 0;
                else return 1;
            }
        });
        ListNode dummy = new ListNode(0);
        ListNode p = dummy;
        for (ListNode node : lists) {
            if (node != null) queue.add(node);
        }
        while (!queue.isEmpty()) {
            p.next = queue.poll();
            p = p.next;
            if (p.next != null) queue.add(p.next);
        }
        return dummy.next;
    }
}

