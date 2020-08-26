class Solution {
public:
    TreeNode* Convert(TreeNode* root){
        if(root==NULL) return NULL;
        stack<TreeNode* > sta;
        TreeNode *p=root;
        TreeNode* pre=NULL;
        bool isFirst=1;
        while(p!= nullptr||!sta.empty()){
            while(p!=NULL){
                sta.push(p);
                p=p->left;
            }
            p=sta.top();
            sta.pop();
            if(isFirst){
                root=p;
                pre=root;
                isFirst=0;
            }else{
                pre->right=p;
                p->left=pre;
                pre=p;
            }
            p=p->right;
            
        }
        return root;
    }
};