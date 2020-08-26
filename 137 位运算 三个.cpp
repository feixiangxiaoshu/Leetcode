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
#include <list>
using namespace std;



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0;i < 32;++i){
            int sum = 0;
            for(int j = 0;j < nums.size();++j){
                sum += (nums[j] >> i) & 1;
            }
            res =res|(sum%3)<<i;
        }
        return res;
    }
};

int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


