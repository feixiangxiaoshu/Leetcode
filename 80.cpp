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
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int p=0,count=0;
        int tmp=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==tmp){
                if(count<2){
                    count++;
                    nums[p]=tmp;
                    p++;
                }else{
                    continue;
                }
            }else{
                count=1;
                tmp=nums[i];
                nums[p++]=tmp;
            }
        }
        return p;
    }
};
int main() {
    Solution s;
}

