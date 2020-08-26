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

//class Solution {
//public:
//    string addStrings(string num1, string num2) {
//        string res="";
//        if(num1=="0") return num2;
//        if(num2=="0") return num1;
//        int sign=0;
//        int tmp_count=0;
//        int i=num1.size()-1;
//        int j=num2.size()-1;
//        while(i>=0&&j>=0){
//            tmp_count=to_int(num1[i])+to_int(num2[j])+sign;
//            if(tmp_count<10){
//                sign=0;
//                res=to_string(tmp_count)+res;
//                i--,j--;
//            }
//            else{
//                tmp_count=tmp_count-10;
//                sign=1;
//                res=to_string(tmp_count)+res;
//                i--,j--;
//            }
//
//        }
//        while(i>=0){
//            tmp_count=to_int(num1[i])+sign;
//            if(tmp_count<10){
//                sign=0;
//                res=to_string(tmp_count)+res;
//                i--;
//            }
//            else{
//                tmp_count=tmp_count-10;
//                sign=1;
//                res=to_string(tmp_count)+res;
//                i--;
//            }
//        }
//        while(j>=0){
//            tmp_count=to_int(num2[j])+sign;
//            if(tmp_count<10){
//                sign=0;
//                res=to_string(tmp_count)+res;
//                j--;
//            }
//            else{
//                tmp_count=tmp_count-10;
//                sign=1;
//                res=to_string(tmp_count)+res;
//                j--;
//            }
//        }
//        if(sign==0) return res;
//        if(sign==1) return "1"+res;
//    }
//    int to_int(char num){
//        stringstream ss;
//        int res;
//        ss<<num;
//        ss>>res;
//        return res;
//    }
//};

class Solution {
public:
    string multiply(string num1, string num2) {
        int j=num2.size()-1;
        vector<string> tmp_res;
        string result="";
        while(j>=0){
            string tmp_s="";
            for(int i=0;i<(num2[j]-'0');i++){
                tmp_s=addStrings(tmp_s,num1);
            }
            tmp_res.push_back(tmp_s);
            j--;
        }

        for(int i=0;i<tmp_res.size();i++){
            string ss(i,'0');
            result=addStrings(result,tmp_res[i]+ss);

        }
        return result;
    }
    string addStrings(string num1, string num2) {
        string res="";
        if(num1=="0") return num2;
        if(num2=="0") return num1;
        int sign=0;
        int tmp_count=0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        while(i>=0||j>=0){
            int n1= ((i>=0)? (num1[i]-'0'):0);
            int n2= ((j>=0)? (num2[j]-'0'):0);
            tmp_count=n1+n2+sign;
            sign=tmp_count/10;
            if(sign==0) tmp_count=tmp_count;
            else tmp_count=tmp_count-10;
            res=to_string(tmp_count)+res;
            i--,j--;

        }
        if(sign==0) return res;
        if(sign==1) return "1"+res;
        return res;
    }

};


int main() {
    Solution s;
    cout << s.multiply("5", "789");
    string ss(0,'0');

}
