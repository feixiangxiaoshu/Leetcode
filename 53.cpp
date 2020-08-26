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
    int maxSubArray(vector<int>& array) {
        if(array.size()<1){
            return 0;
        }
        int res=array[0];//最大的数
        int mmax=array[0];//以array[i]为末尾元素的子数组的和的最大值
        for(int i=1;i<array.size();i++){
            mmax=max(mmax+array[i],array[i]);
            res=max(mmax,res);

        }
        return res;
    }
};
int main() {
    Solution s;

}
