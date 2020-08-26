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
    string addBinary(string a, string b) {
        int sign=0;
        string res="";
        int len=max(a.size(),b.size());
        string s="";
        a=s.assign(len-a.size(),'0')+a;
        b=s.assign(len-b.size(),'0')+b;
        cout<<"a"<<a<<endl;
        cout<<"b"<<b<<endl;
        for(int i=len-1;i>=0;i--){
            int tmp=(a[i]-'0')+(b[i]-'0')+sign;
            if(tmp>1){
                sign=1;
                res=to_string(tmp-2)+res;
            }else{
                sign=0;
                res=to_string(tmp)+res;
            }
        }
        if(sign==0) return res;
        else return '1'+res;

    }
};
int main() {
    string s1="1001";
    string s2="1000";
    Solution s;
    cout<<s.addBinary(s1,s2);

}

