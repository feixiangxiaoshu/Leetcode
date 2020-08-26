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
    string longestCommonPrefix(vector<string>& strs) {
        int len=strs.size();
        if(len==0) return "";
        if(len==1) return strs[0];
        int minlen=strs[0].size();
        for(int i=0;i<len;i++){
            int tmplen=strs[i].size();
            minlen=max(tmplen,minlen);
        }
        string res="";
        for(int i=0;i<minlen;i++){
            char tmp=strs[0][i];
            for(int j=0;j<len;j++){
                if(strs[j][i]!=tmp){
                    return res;
                }
            }
            res=res+tmp;
        }
        return res;
    }
};

int main(){
    Solution s;

}
