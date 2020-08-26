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
        vector<int> res;
        vector<vector<int> > arr;
        if(root==NULL){
            return arr;
        }
        queue<TreeNode*> tmp_q;
        tmp_q.push(root);
        while(!tmp_q.empty()){
            int len=tmp_q.size();
            vector<int> tmp;
            for(int i=0;i<len;i++){

                TreeNode * tmp_node=tmp_q.front();
                tmp_q.pop();
                tmp.push_back(tmp_node->val);
                if(tmp_node->left!= nullptr){
                    tmp_q.push(tmp_node->left);
                }
                if(tmp_node->right!= nullptr) {
                    tmp_q.push(tmp_node->right);
                }
            }
            arr.push_back(tmp);
        }
        return arr;
    }
};
int main() {
    Solution s;

}


