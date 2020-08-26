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
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return 1;
        return isBalanced(root->left)&&isBalanced(root->right)&&abs(depth(root->left)-depth(root->right))<=1;
    }
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        return max(depth(root->left)+1,depth(root->right)+1);
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


