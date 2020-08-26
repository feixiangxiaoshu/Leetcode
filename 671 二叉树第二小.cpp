class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        set<int> res;
        queue<TreeNode* > q;
        if(root==NULL) return -1;
        q.push(root);
        while(!q.empty()){
            TreeNode* tmp=q.front();
            q.pop();
            res.insert(tmp->val);
            if(tmp->left) q.push(tmp->left);
            if(tmp->right)q.push(tmp->right);
        }
        if(res.size()==1) return -1;
        else{
            set<int>::iterator it=res.begin();
            it++;
            return *(it);
        }
        return -1;
    }
};