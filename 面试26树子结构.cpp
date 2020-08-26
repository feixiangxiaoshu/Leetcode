//
// Created by Administrator on 2020/5/23.
//

class Solution {
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if(A==NULL||B==NULL) return 0;
        return isSubStructure(A->left,B)||isSubStructure(A->right,B)||dfs(A,B);

    }
    bool dfs(TreeNode *a,TreeNode *b){
        if(b==NULL) return 1;
        if(a==NULL) return 0;
        return a->val==b->val&&dfs(a->left,b->left)&&dfs(a->right,b->right);
    }
};