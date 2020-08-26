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
    string intToRoman(int num) {
        string c[4][10]={

                "","I","II","III","IV","V","VI","VII","VIII","IX",

                "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC",

                "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM",

                "","M","MM","MMM"

        };
        string s;
        if(num>=1000){
            s+=c[3][num/1000];
        }
        if(num>=100)
            s+=c[2][num / 100 % 10];
        if(num>=10)
            s+= c[1][num / 10 % 10];
        if(num>0)
            s+= c[0][num % 10];
        return s;
    }
};

int main(){
    Solution s;
    cout<<s.intToRoman(11);
}
