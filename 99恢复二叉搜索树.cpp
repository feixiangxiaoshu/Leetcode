//
// Created by Administrator on 2020/8/12.
//

class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode *firstNode=NULL;
        TreeNode* secondNode=NULL;
        TreeNode* pre=new TreeNode(INT_MIN);
        stack<TreeNode* > sta;
        TreeNode* p=root;
        while(p||!sta.empty()){
            while(p){
                sta.push(p);
                p=p->left;
            }
            p=sta.top();sta.pop();
            if(firstNode==NULL&&pre->val>p->val){
                firstNode=pre;
            }
            if(firstNode!=NULL&&pre->val>p->val){
                secondNode=p;
            }
            pre=p;
            p=p->right;
        }
        swap(firstNode->val,secondNode->val);
        return ;
    }
};