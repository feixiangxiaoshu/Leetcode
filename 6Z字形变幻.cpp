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
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        } else if (numRows == 2) {
            string ss = "";
            int tmp = 0;
            while (tmp < s.size()) {
                ss += s[tmp];
                tmp = tmp + 2;
            }
            tmp = 1;
            while (tmp < s.size()) {
                ss += s[tmp];
                tmp = tmp + 2;
            }
            return ss;
        } else {
            int sign = 1;//方向标志
            int p = 0;
            int len = s.size();

            vector<string> res(min(numRows, len));
            int i = 0;//行列
            while (p < s.size()) {
                if (sign == 1 && i >= 0 && i < numRows) {
                    res[i] += s[p];
                    p++;
                    i++;
                } else if (i == numRows) {
                    i = i - 2;
                    sign = 0;
                } else if (sign == 0 && i >= 0 && i < numRows) {
                    res[i] += s[p];
                    p++;
                    i--;
                } else if (i < 0) {
                    i = i + 2;
                    sign = 1;
                }

            }
            string ss;
            for (int i = 0; i < res.size(); i++) {
                ss += res[i];
            }
            return ss;
        }

    }
};



int main(){
    Solution s;
    string res;
    string ss;
    res=s.convert("helloworld",3);

    cout<<res;
}
