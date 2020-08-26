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

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> sta;
        sta.push(-1);
        int len=0;int maxlen=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                sta.push(i);
            }else if(s[i]==')'){
                sta.pop();
                if(sta.empty()){
                    sta.push(i);
                }else{
                    len=i-sta.top();
                    maxlen=max(len,maxlen);
                }
            }
        }
        return maxlen;
    }
};

int main(){
    Solution s;
    cout<<s.longestValidParentheses(")");

}