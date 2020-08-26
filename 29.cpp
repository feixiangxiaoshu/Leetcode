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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int min_value=-pow(2,31);
    int max_value=pow(2,31)-1;

    int divide(int dividend, int divisor) {
        if (dividend == 0) {
            return 0;
        }
        if (dividend == min_value && divisor == -1) {
            return max_value;
        }
        if (dividend == min_value && divisor == 1) {
            return min_value;
        }
        bool negative;
        negative = (dividend ^ divisor) <0;//用异或来计算是否符号相异
        long t = abs((long) dividend);  //注意 32位机器和64位机器的long不一样 32位long和int一样 64位不一样
        long d= abs((long) divisor);
        int result = 0;
        for (int i=31; i>=0;i--) {
            if ((t>>i)>=d) {//找出足够大的数2^n*divisor
                result+=1<<i;//将结果加上2^n
                t-=d<<i;//将被除数减去2^n*divisor
            }
        }
        return negative ? -result : result;//符号相异取反
    }
};
int main(){
    Solution s;
    long a=2147483647;
    cout<<a;




}
