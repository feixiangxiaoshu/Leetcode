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
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return helper(nums,0,nums.size());
    }
    TreeNode* helper(vector<int> &nums,int start,int end){
        if(start==end)
            return NULL;
        int mid=start+(end-start)/2;
        TreeNode* p=new TreeNode(nums[mid]);
        p->left=helper(nums,start,mid);
        p->right=helper(nums,mid+1,end);
        return p;
    }
};

int main() {
    Solution s;
    vector<int> res1;
    vector<int> res2;
    int a[7]={3,9,6,1,20,15,7};
    int b[7]={6,9,1,3,15,20,7};
    for(int i=0;i<7;i++){
        res1.push_back(a[i]);
        res2.push_back(b[i]);
    }
    s.buildTree(res1,res2);

}


