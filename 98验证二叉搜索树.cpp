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
    bool isValidBST(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
        vector<int> res1(res);
        set<int> tmp;
        for(int i=0;i<res.size();i++){ tmp.insert(res[i]);}
        sort(res.begin(),res.end());
        return res1==res&&tmp.size()==res1.size();
    }
    void inorder(TreeNode* root,vector<int> &res){
        if(root==nullptr) return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
};
int main() {
    Solution s;

}


