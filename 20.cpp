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
    bool isValid(string s) {
        if(s=="") return 1;
        stack<char> tmp;
        map<char,char> mp;
        mp['}']='{'; mp[']']='[';mp[')']='(';
        tmp.push('?');
        for(int i=0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='(')
                tmp.push(s[i]);
            else if(s[i]=='}'||s[i]==']'||s[i]==')'){
                if(mp[s[i]]==tmp.top())
                    tmp.pop();
                else
                    return 0;
            }
        }

        if(tmp.top()=='?') return 1;

        else return 0;

    }
};
int main(){
    Solution s;
//    stack<int> ss;
//    ss.push(1);
//    ss.push(2);
//    cout<<ss.top();
    cout<<s.isValid("}");


}
