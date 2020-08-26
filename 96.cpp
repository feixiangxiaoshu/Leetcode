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
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

//class Solution {//卡特兰数
//public:
//    int numTrees(int n) {
//        long n0=1;
//        long res=0;
//        for(int i=0;i<n;i++){
//            res=2*(2*i+1)*n0/(i+2);
//            n0=res;
//        }
//        return (int)res;
//    }
//};
class Solution {
public:
    int numTrees(int n) {
        vector<int> res(n+1,0);
        res[0]=1;res[1]=1;
        for(int i=2;i<=n;i++){//节点个数
            for(int j=1;j<=i;j++){//节点排序数
                res[i]=res[i]+res[j-1]*res[i-j];
            }
        }
        return res[n];
    }
};
int main() {
    Solution s;

}


