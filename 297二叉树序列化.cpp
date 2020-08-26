//
// Created by Administrator on 2020/6/16.
//

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "";
        queue<TreeNode*> q;
        q.push(root);
        stringstream ss;
        while(!q.empty()){
            TreeNode *tmp=q.front();
            q.pop();
            if(!tmp) ss<<"#"<<" ";
            else{
                ss<<tmp->val<<" ";
                q.push(tmp->left);
                q.push(tmp->right);
            }
        }
        return ss.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.empty()) return NULL;
        stringstream ss(data);
        string t;
        ss>>t;
        queue<TreeNode* > q;
        TreeNode *root=new TreeNode(stoi(t));
        q.push(root);
        while(!q.empty()){
            TreeNode *p=q.front();
            q.pop();
            ss>>t;
            if(t=="#"){
                p->left=NULL;
            }else{
                p->left=new TreeNode(stoi(t));
                q.push(p->left);
            }
            ss>>t;
            if(t=="#"){
                p->right=NULL;
            }else{
                p->right=new TreeNode(stoi(t));
                q.push(p->right);
            }
        }
        return root;
    }
};