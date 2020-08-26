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

