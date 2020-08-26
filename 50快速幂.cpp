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
    double myPow(double x, int n) {
        // 特殊情况处理
        if(n == 0) return 1;
        if(x == 0) return 0;
        double ans = 1;
        // 因为 n 为负时最小可达-2147483648，直接取反时超过int上限，因此特殊处理
        if(n < 0)
        {
            x = 1 / x;
            ans = x;
            n = -(n + 1);
        }
        // 快速幂
        while(n > 0)
        {
            if(n % 2 > 0) ans *= x;
            n /= 2;
            x = x * x;
        }
        return ans;
    }
};
int main() {
    Solution s;

}
