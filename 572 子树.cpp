#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <set>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(t==NULL) return 1;
        if(s==NULL) return 0;
        return isSubtree(s->left,t)||isSubtree(s->right,t)||isSame(s,t);
    }

    bool isSame(TreeNode* r1,TreeNode *r2){
        if(r1==NULL&&r2==NULL){
            return 1;
        }
        if(r1==NULL||r2==NULL){
            return 0;
        }
        if(r1->val!=r2->val){
            return 0;
        }
        return isSame(r1->left,r2->left)&&isSame(r1->right,r2->right);
    }
};