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


class Solution {
public:

    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        if(s.length()==0) return res;
        for(int a=1;a<4;a++){
            for(int b=1;b<4;b++){
                for(int c=1;c<4;c++){
                    for(int d=1;d<4;d++){
                        if(a+b+c+d==s.length()){
                            int s1=stoi(s.substr(0,a));
                            int s2=stoi(s.substr(a,b));
                            int s3=stoi(s.substr(a+b,c));
                            int s4=stoi(s.substr(a+b+c,d));
                            if(s1<=255&&s2<=255&&s3<=255&&s4<=255){
                                string tmp=to_string(s1)+'.'+to_string(s2)+'.'+to_string(s3)+'.'+
                                        to_string(s4);
                                if(tmp.length()==s.size()+3)
                                    res.push_back(tmp);
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
};
int main() {
    Solution s;
    ListNode *p1=new ListNode(1);
    ListNode *p2=new ListNode(2);
    ListNode *p3=new ListNode(3);
    ListNode *p4=new ListNode(4);
    ListNode *p5=new ListNode(5);
    ListNode *p6=new ListNode(6);
    p1->next=p2;p2->next=p3;p3->next=p4;p4->next=p5;p5->next=p6;
    ListNode *p=s.reverseBetween(p1,3,5);
    while(p!=NULL){
        cout<<p->val<<" ";
        p=p->next;
    }


