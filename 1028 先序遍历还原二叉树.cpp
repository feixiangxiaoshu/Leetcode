//
// Created by Administrator on 2020/6/18.
//

class Solution {
public:
    TreeNode* recoverFromPreorder(string s) {
        vector<TreeNode* > q;

        int i=0;
        while(i<s.size()){
            int level=0;
            int cur_val=0;
            while(s[i]=='-'&&i<s.size()){
                level++;
                i++;
            }
            while (s[i]!='-'&&i<s.size()){
                cur_val=cur_val*10+s[i]-'0';
                i++;
            }
            i--;
            TreeNode* node=new TreeNode(cur_val);
            if(q.empty()) q.push_back(node);
            else{
                while(level<q.size()){
                    q.pop_back();
                }
                TreeNode* tmp=q.back();
                if(tmp->left==NULL) tmp->left=node;
                else{
                    tmp->right=node;
                }
                q.push_back(node);
            }
            i++;
        }
        return q.front();

    }
};