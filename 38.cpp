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
    string countAndSay(int n) {
        if(n==0) return 0;
        string res="";
        if(n==1) return "1";
        res="1";
        for(int i=1;i<n;i++){
            string tmp_s=res;
            string tmp_res="";
            char tmp_sign=tmp_s[0];
            int count=0;
            for(int j=0;j<tmp_s.size();j++ ){
                if(tmp_s[j]==tmp_sign){
                    count++;
                }else{
                    tmp_res=tmp_res+to_string(count)+tmp_sign;
                    tmp_sign=tmp_s[j];
                    count=1;
                }
            }
            tmp_res=tmp_res+to_string(count)+tmp_sign;
            res=tmp_res;
        }
        return res;
    }

};

int main(){
   Solution s;
   cout<<"1:"<<s.countAndSay(1)<<endl;
   cout<<"2:"<<s.countAndSay(2)<<endl;
   cout<<"3:"<<s.countAndSay(3)<<endl;
   cout<<"4:"<<s.countAndSay(4)<<endl;
   cout<<"5:"<<s.countAndSay(5)<<endl;

}