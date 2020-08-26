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
    int sumNumbers(TreeNode* root) {
        int ans=0;
        vector<string> res;
        string path="";
        helper(root,path,res);
        for(int i=0;i<res.size();i++){
            ans+=stoi(res[i]);
        }
        return ans;
    }
    void helper(TreeNode* root,string &path,vector<string>& res){
        if(root==NULL) return;
        if(root->left==NULL&&root->right==NULL){
            res.push_back(path+to_string(root->val));
            return ;
        }
        path=path+to_string(root->val);
        helper(root->left,path,res);
        helper(root->right,path,res);
        path.erase(path.end()-1);
    }
};

int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


