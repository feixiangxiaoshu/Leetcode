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
    void nextPermutation(vector<int>& nums) {
        int sign=0;
        int j=nums.size()-1;
        for(int i=nums.size()-1;i>0;i--) {
            if (nums[i] > nums[i - 1]) {
                while(nums[j]<=nums[i-1]){
                    j--;
                }
                swap(nums[j],nums[i-1]);
                reverse(nums.begin()+i,nums.end());
                sign++;
                break;
            } else
                continue;
        }
        if(sign==0)
            sort(nums.begin(),nums.end());
    }
};

int main(){

}