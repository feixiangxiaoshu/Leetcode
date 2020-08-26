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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return helper(postorder,0,postorder.size(),inorder,0,inorder.size(), mp);
    }
    TreeNode* helper(vector<int> &postorder,int start1,int end1,vector<int> &inorder,int start2,int end2,unordered_map<int,int> &mp){
        if(start1==end1) return NULL;
        int root_val=postorder[end1-1];
        TreeNode* root=new TreeNode(root_val);
        int root_index=mp[root_val];
        int leftNum=root_index-start2;
        root->left=helper(postorder,start1,start1+leftNum,inorder,start2,root_index,mp);
        root->right=helper(postorder,start1+leftNum,end1-1,inorder,root_index+1,end2,mp);
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


