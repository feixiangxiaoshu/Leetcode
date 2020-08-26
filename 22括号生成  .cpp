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

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<vector<string> >res(n+1);
        res[0]={""};
        res[1]={"()"};
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                for(string s1:res[j]){
                    for(string s2:res[i-1-j]){
                        res[i].push_back("("+s1+")"+s2);
                    }
                }

            }
        }

        return res[n];
    }
};
int main(){
    Solution s;

    vector<string> res;


    res=s.generateParenthesis(8);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    cout<<res.size();


}
