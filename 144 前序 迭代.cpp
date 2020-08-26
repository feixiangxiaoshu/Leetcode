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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

//class Solution {
//public:
//    vector<int> preorderTraversal(TreeNode* root) {
//        vector<int> res;
//        helper(root,res);
//        return res;
//    }
//    void helper(TreeNode* root,vector<int> &res){
//        if(root==NULL) return ;
//        res.push_back(root->val);
//        helper(root->left,res);
//        helper(root->right,res);
//    }
//};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode* > sta;
        while(root||!sta.empty()){
            while(root){
                res.push_back(root->val);
                sta.push(root);
                root=root->left;
            }
            root=sta.top();
            root=root->right;
            sta.pop();
        }
        return res;
    }
};
int main() {
    Solution s;

}


