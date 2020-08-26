#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;
class Solution {
public:
    bool match(char* str, char* pattern)
    {
        if(*str=='\0'&&*pattern=='\0') return 1;
        if(*str!='\0'&&*pattern=='\0') return 0;
        if(*(pattern+1)!='*'){
            if(*str==*pattern||*str!='\0'&&*pattern=='.'){
                return match(str+1,pattern+1);
            }else{
                return 0;
            }

        } else{
            if(*str==*pattern||*str!='\0'&&*pattern=='.'){
                return match(str+1,pattern)||match(str,pattern+2);
            }else{
                return match(str,pattern+2);
            }
        }
    }
};
class Solution {
public:
    bool isMatch(string s, string p) {
        if(s==""&&p=="") return 1;
        if(s!=""&&p=="") return 0;
        if(p[1]!='*'){
            if(s[0]==p[0]||(s!=""&&p[0]=='.')){
                s.erase(s.begin());
                p.erase(p.begin());
                return isMatch(s,p);
            }else{
                return 0;
            }

        }else{
            if(s[0]==p[0]||(s!=""&&p[0]=='.')){
                string tmps1=s;
                string tmpp2=p;
                tmpp2.erase(tmpp2.begin());
                tmpp2.erase(tmpp2.begin());
                tmps1.erase(tmps1.begin());
                return isMatch(tmps1,p)||isMatch(s,tmpp2);//多个 和一个情况
            }else{
                string tmpp2=p;//0个情况
                tmpp2.erase(tmpp2.begin());
                tmpp2.erase(tmpp2.begin());
                return isMatch(s,tmpp2);
            }
        }

    }
    };

//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        return match(s.data(), p.data());
//    }
//    bool match(char* s, char* p) {
//        if (!*p) return !*s;
//        if (*(p + 1) != '*')
//            return *s == *p || (*p == '.' && *s != '\0') ? match(s + 1, p + 1) : false;
//        else
//            return *s == *p || (*p == '.' && *s != '\0') ? match(s, p + 2) || match(s + 1, p) : match(s, p + 2);
//        //或者return (*s == *p || (*p == '.' && *s != '\0')) && match(s + 1, p) || match(s, p + 2);
//    }
//};
int main(){
    Solution s;
//    string test="abcd";
//    test.erase(test.begin());
//    cout<<test;
    cout<<s.isMatch("ab",".*");
}
