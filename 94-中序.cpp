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



 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

//class Solution { ///递归
//public:
//    vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> res;
//        inorder(root,res);
//        return res;
//    }
//    void inorder(TreeNode *root,vector<int> &res){
//        if(root== nullptr)
//            return ;
//        inorder(root->left,res);
//        res.push_back(root->val);
//        inorder(root->right,res);
//    }
//};
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==nullptr)
            return res;
        stack<TreeNode*> sta;
        TreeNode *cur=root;
        while(cur!= nullptr||!sta.empty()){
            while(cur!= nullptr){
                sta.push(cur);
                cur=cur->left;
            }
            cur=sta.top();
            sta.pop();
            res.push_back(cur->val);
            cur=cur->right;
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


