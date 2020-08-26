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
    int mySqrt(int x) {
        if(x<2) return x;
        long left=0,right=x/2;
        long mid=-1;
        long num=-1;
        while(left<=right){
            mid=left+(right-left)/2;
            num=mid*mid;
            if(num>x) right=mid-1;
            else if(num<x) {
                left=mid+1;
            }else{
                return mid;
            }
        }
        return right;
    }
};
int main() {
    string s1="1001";
    string s2="1000";
    Solution s;
    cout<<s.mySqrt(8);

}


int main() //二分法 有精度
{
    double eps = 1e-6;
    double k = 0.8;  # 输入正数
    double l = 0.0,r,mid;
    if (k>=1) r = k;  # 若输入正数大于1，则右端点设为 k
    if (k<1)  r = 1;  # 若输入整数小于1，则右端点设为 1

    while (fabs(l-k/l)>eps)
    {
        mid = l + (r - l) /2 ;
        if (mid<k/mid)
        {
            l = mid;
        }
        else {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
    cout<<fixed<<setprecision(2);
}

