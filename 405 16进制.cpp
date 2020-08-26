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



//class Solution {
//public:
//    vector<int> postorderTraversal(TreeNode* root) {
//        vector<int> res;
//        helper(root,res);
//        return res;
//    }
//    void helper(TreeNode* root,vector<int> res){
//        if(root==NULL) return ;
//        helper(root->left,res);
//        helper(root->right,res);
//        res.push_back(root->val);
//
//    }
//};

class Solution {
public:
    string toHex(int num) {
        string res="";
        if(num==0) return "0";
        string s="0123456789abcdef";
        auto t=0xf;
        unsigned int n=num;
        while(n!=0){
            res=s[n&t]+res;
            n=n>>4;
        }
        for(int i=0;i<res.length();i++){
            if(res[i]=='0'){
                res.erase(res.begin());
            }
            else{
                break;
            }
        }
        return res;
    }
};
int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


