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
    bool isPalindrome(string s) {
        string tmp="";
        for(auto c:s){
            if(c<='Z'&&c>='A'||c<='z'&&c>='a'||c<='9'&c>='0'){
                tmp+=c;
            }
        }
        string ss=tmp;
        reverse(ss.begin(),ss.end());
        transform(ss.begin(),ss.end(),ss.begin(),::tolower);
        transform(tmp.begin(),tmp.end(),tmp.begin(),::tolower);
        cout<<ss;
        if(ss==tmp){
            return 1;
        }else{
            return 0;
        }
    }
};
int main() {
    Solution s;
    cout<<s.isPalindrome("0P");


}


