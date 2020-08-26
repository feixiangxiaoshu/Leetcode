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


class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string> > res;
        vector<string> tmp;
        backtrack(res,s,tmp);
        return res;
    }
    void backtrack(vector<vector<string> > &res,string s,vector<string> &tmp){
        if(s==""||s.length()==0){
            vector<string> tmp_ans(tmp);
            res.push_back(tmp_ans);
        }
        for(int i=1;i<=s.length();i++){
            if(isPalidrome(s.substr(0,i))){
                tmp.push_back(s.substr(0,i));
                backtrack(res,s.substr(i,s.length()-i),tmp);
                tmp.pop_back();
            }
        }
    }
    bool isPalidrome(string s){
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return 0;
            }
            left++;right--;
        }
        return 1;
    }
};
int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


