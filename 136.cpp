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



struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unsigned int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        return res^0;
    }
};
int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


