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
    int romanToInt(string s) {
        int i,count = 0;
        for(i = 0;i < s.size();i++)
        {
            switch(s[i])
            {
                case 'M': count += 1000; break;
                case 'D': count += 500; break;
                case 'C':
                    if(s[i+1] == 'D' || s[i+1] == 'M')
                        count -= 100;
                    else
                        count += 100;
                    break;
                case 'L': count += 50; break;
                case 'X':
                    if(s[i+1] == 'L' || s[i+1] == 'C')
                        count -= 10;
                    else
                        count += 10;
                    break;
                case 'V': count += 5; break;
                case 'I':
                    if(s[i+1] == 'V'||s[i+1]=='X')
                        count--;
                    else
                        count++;
                    break;
            }
        }
        return count;

    }
};

int main(){
    Solution s;
    cout<<s.romanToInt("IX");
}
