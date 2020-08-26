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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> >res;
        if(root==NULL) return res;
        vector<int> t;
        res.push_back(t);
        queue<TreeNode* > tmp_q;
        tmp_q.push(root);
        while(!tmp_q.empty()){
            int len=tmp_q.size();
            vector<int> tmp;
            for(int i=0;i<len;i++){
                TreeNode* p=tmp_q.front();
                tmp_q.pop();
                if(p->left){
                    tmp.push_back(p->val);
                    tmp_q.push(p->left);
                }
                if(p->right){
                    tmp.push_back(p->val);
                    tmp_q.push(p->right);
                }
            }
            if(tmp.size()!=0)
                res.push_back(tmp);
        }
        reverse(res.begin(),res.end());
        return res;
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


