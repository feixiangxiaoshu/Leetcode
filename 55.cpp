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
    bool canJump(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(i>k) return 0;
            k=max(k,nums[i]+i);
        }
        return 1;
    }
};
int main() {
    Solution s;

}
