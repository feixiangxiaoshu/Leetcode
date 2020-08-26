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
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int i=0;int j=1;
        for(j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};
int main(){
    Solution s;
    vector<string> res;
    ListNode *p1=new ListNode(1);
    ListNode *p2=new ListNode(2);
    ListNode *p3=new ListNode(3);
    ListNode *p4=new ListNode(4);
    ListNode *p5=new ListNode(5);

    p1->next=p2;
    p2->next=p3;
    p3->next=p4;
    p4->next=p5;
    ListNode *tmp=s.reverseKGroup(p1,3);
    while(tmp!= nullptr){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }





}
