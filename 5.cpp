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
using namespace std;

class Solution {
public:
    int helper(int left,int right,string s){
        int L=left;
        int R=right;
        while(L>=0&&R<s.size()&&s[L]==s[R]){
            L--;
            R++;
        }
        return R-L-1;

    }
    string longestPalindrome(string s) {
        if(s.size()==0){
            return "";
        }
        if(s.size()==1){
            return s;
        }
        int start=0;int end=0;
        for(int i=0;i<s.size();i++){
            int len1=helper(i,i+1,s);
            int len2=helper(i,i,s);
            int len=max(len1,len2);
            if(len>end-start){
                start=i-(len-1)/2;
                end=i+len/2;
            }
        }
        string res="";
        for(int i=start;i<=end;i++){
            res+=s[i];
        }
        return res;


    }
};



int main(){
    Solution s;
    cout<<s.longestPalindrome("babad");

}
