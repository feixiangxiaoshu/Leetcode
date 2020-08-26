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

class Solution {
public:
    vector<TreeNode*> generateTrees(int n) {
        vector<TreeNode*> res;
        if(n==0) return res;
        res=getAns(1,n);
        return res;
    }
    vector<TreeNode*> getAns(int start,int end){
        vector<TreeNode*> ans;
        if(start>end){
            ans.push_back(NULL);
            return ans;
        }
        if(start==end){
            TreeNode *tree=new TreeNode(start);
            ans.push_back(tree);
            return ans;
        }for(int i=start;i<=end;i++){//尝试每个数字作为根节点
            vector<TreeNode*> leftTrees=getAns(start,i-1);//start 为开头 可能为左部分开头 可能为右部分开头
            vector<TreeNode*> rightTrees=getAns(i+1,end);
            for(TreeNode* l:leftTrees){
                for(TreeNode* r:rightTrees){
                    TreeNode* cur_tree=new TreeNode(i);
                    cur_tree->left=l;
                    cur_tree->right=r;
                    ans.push_back(cur_tree);
                }
            }

        }
        return ans;
    }
};
int main() {
    Solution s;

}


