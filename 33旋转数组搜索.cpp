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
    int search(vector<int>& nums, int target) {
        int low=0;int high=nums.size();int mid=0;
        while(low<high){
            mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }else if((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid])){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        if(low==nums.size()) return -1;
        return nums[low]==target? low:-1;

    }
};

int main(){
    Solution s;
    cout<<s.longestValidParentheses(")");

}