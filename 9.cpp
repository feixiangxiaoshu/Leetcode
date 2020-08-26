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
    bool isPalindrome(int x) {
        stringstream ss;

        ss<<x;
        string s1;
        string s2;
        ss>>s1;
        s2=s1;
        reverse(s1.begin(),s1.end());

        if(s1==s2)
            return 1;
        else
            return 0;


    }
};


int main(){
    Solution s;
    char * p="abcde";
    cout<<p;
}
