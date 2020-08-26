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
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> res;
        if(head==NULL) return NULL;
        while(head!=NULL){
            res.push_back(head->val);
            head=head->next;
        }
        return helper(res,0,res.size());
    }
    TreeNode* helper(vector<int> &res,int start,int end){
        if(start==end) return NULL;
        int mid=start+(end-start)/2;
        TreeNode* root=new TreeNode(res[mid]);
        root->left=helper(res,start,mid);
        root->right=helper(res,mid+1,end);
        return root;
    }

};
int main() {
    Solution s;

}


