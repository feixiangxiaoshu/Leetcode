class Solution {
public:
    bool isSubTree(TreeNode *pRoot1,TreeNode *pRoot2){
        if (pRoot2==NULL)
            return true;
        else if (pRoot1==NULL){
            return false;
        }
        else if (pRoot2->val==pRoot1->val){
            return isSubTree(pRoot1->left,pRoot2->left)&&isSubTree(pRoot1->right,pRoot2->right);
        }else
            return false;

    }
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot2==NULL||pRoot1==NULL){
            return false;
        }
        else
            return isSubTree(pRoot1,pRoot2)||
                   HasSubtree(pRoot1->left,pRoot2)||
                   HasSubtree(pRoot1->right,pRoot2);
    }
};