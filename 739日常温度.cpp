/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> tmp;
        int len=T.size();
        vector<int> res(len,0);
        for(int i=0;i<len;i++){
            while(!tmp.empty()&&T[i]>T[tmp.top()]){
                auto t=tmp.top();
                tmp.pop();
                res[t]=i-t;
            }
            tmp.push(i);
        }
        return res;
    }
};