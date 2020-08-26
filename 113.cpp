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
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > res;
        vector<int> path;
        helper(root,sum,path,res);
        return res;
    }
    void helper(TreeNode* root,int sum,vector<int> &path,vector<vector<int> > &res){
        if(root==NULL){
            return;
        }else{
            if(sum-root->val==0&&root->left==NULL&&root->right==NULL){
                path.push_back(root->val);
                res.push_back(path);
                path.pop_back();
            }else{
                path.push_back(root->val);
                helper(root->left,sum-root->val,path,res);
                helper(root->right,sum-root->val,path,res);
                path.pop_back();

            }
        }

    }
};
int main() {
    Solution s;

}


