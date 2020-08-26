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
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1]) return nums.size();
        if(nums.size()==1){
            if(target<nums[0]) return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==target)
                return i;
            else if(target<=nums[i+1]&&target>nums[i]){
                return i+1;
            }else if(target<nums[i+1]&&target<nums[i]){
                return i;
            }
        }
    }
};
int main(){
    Solution s;
    vector<int> num;
    num.push_back(1);

    cout<<s.searchInsert(num,0 );




}
