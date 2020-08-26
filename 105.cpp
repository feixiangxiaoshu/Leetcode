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
class Solution {
public:
    map<int,int> mp;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()==0||inorder.size()==0) return NULL;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return helper(preorder,0,preorder.size(),inorder,0,inorder.size());

    }
    TreeNode* helper(vector<int>& preorder, int start1,int end1,vector<int>& inorder,int start2,int end2){
        if(start1==end1) return NULL;
        int root_val=preorder[start1];
        TreeNode* root=new TreeNode(root_val);
        int root_index=mp[root_val];
        int leftNum=root_index-start2;
        root->left=helper(preorder,start1+1,start1+1+leftNum,inorder,start2,root_index);
        root->right=helper(preorder,start1+1+leftNum,end1,inorder,root_index+1,end2);
        return root;
    }
};

int main() {
    Solution s;
    vector<int> res1;
    vector<int> res2;
    int a[7]={3,9,6,1,20,15,7};
    int b[7]={6,9,1,3,15,20,7};
    for(int i=0;i<7;i++){
        res1.push_back(a[i]);
        res2.push_back(b[i]);
    }
    s.buildTree(res1,res2);

}


