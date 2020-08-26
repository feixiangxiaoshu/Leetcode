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
    void flatten(TreeNode* root) {
        while(root!=nullptr){
            if(root->left==nullptr){
                root=root->right;
            }else{
                TreeNode* p=root->left;
                while(p->right!=nullptr){
                    p=p->right;
                }
                p->right=root->right;
                root->right=root->left;
                root->left=nullptr;

                root=root->right;
            }
        }
    }
};
int main() {
    Solution s;

}


