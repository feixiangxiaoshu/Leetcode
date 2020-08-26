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


class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0||s[0]=='0') return 0;
        int pre=1,now=1;
        for(int i=1;i<s.size();i++){
            int tmp=now;
            if(s[i]=='0'){
                if(s[i-1]=='1'||s[i-1]=='2'){
                    now=pre;
                    pre=tmp;
                }else{
                    return 0;
                }
            } else if(s[i-1]=='1'||(s[i-1]=='2'&&s[i]>='1'&&s[i]<'7')){
                now=now+pre;
                pre=tmp;
            } else{
                pre=now;
            }
        }
        return now;
    }
};
int main() {
    Solution s;
    cout<<s.numDecodings("24726");
}

