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

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > res;
        if(root==NULL) return res;

        queue<TreeNode* > tmp_Q;
        tmp_Q.push(root);
        vector<int> tmp;
        tmp.push_back(root->val);
        res.push_back(tmp);
        while(!tmp_Q.empty()){
            int len=tmp_Q.size();
            vector<int> tmp_res;
            for(int i=0;i<len;i++){
                TreeNode* p=tmp_Q.front();
                tmp_Q.pop();
                if(p->left){
                    tmp_res.push_back(p->left->val);
                    tmp_Q.push(p->left);
                }
                if(p->right){
                    tmp_res.push_back(p->right->val);
                    tmp_Q.push(p->right);
                }
            }
            if(tmp_res.size()!=0)
                res.push_back(tmp_res);
        }
        return res;
    }
};
int main() {
    Solution s;

}


