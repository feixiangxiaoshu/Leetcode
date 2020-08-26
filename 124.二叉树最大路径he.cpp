//
// Created by Administrator on 2020/6/21.
//
class Solution {
public:
    int helper(TreeNode* root,int &val){
        if(root==NULL) return 0;
        int left=helper(root->left,val);
        int right=helper(root->right,val);
        int lmr=root->val+max(0,left)+max(0,right);
        int ret=root->val+max(0,max(left,right));
        val=max(val,max(lmr,ret));
        return ret;
    }
    int maxPathSum(TreeNode* root) {
        int val=INT_MIN;
        helper(root,val);
        return val;
    }
};

