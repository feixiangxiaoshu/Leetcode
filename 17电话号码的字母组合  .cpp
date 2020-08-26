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
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        string num[10]={"","","abc","def","ghi","jkl","mno","pqrs",
                        "tuv","wxyz"};
        if(digits.size()==0) return res;
        res.push_back("");
        for(char c:digits){
            res=combine(num[c-'0'],res);//res是上层的根
        }
        return res;
    }
    vector<string> combine(string clist,vector<string> num){
        vector<string> res;
        for(auto c:clist){
            for(auto i:num){
                res.push_back(i+c);
            }
        }
        return res;
    }
};
int main(){
    Solution s;
    vector<string> res;

    res=s.letterCombinations("234567");
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }


}
