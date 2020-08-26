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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int> > res;
        if(nums.size()<4)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1&&nums[j]==nums[j-1]) continue;
                int start=j+1;int end=nums.size()-1;
                while(start<end){
                    vector<int> tmp;
                    if(nums[i]+nums[j]+nums[start]+nums[end]==target){
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[start]);
                        tmp.push_back(nums[end]);
                        while(start<end&&nums[start]==nums[start+1]){
                            start++;
                        }
                        while(start<end&&nums[end]==nums[end-1]){
                            end--;
                        }
                        start++;end--;
                    }else if(nums[i]+nums[j]+nums[start]+nums[end]<target){
                        start++;
                    }else{
                        end--;
                    }
                    if(tmp.size()>0){
                        res.push_back(tmp);
                    }
                }

            }
        }
        return res;
    }
};
int main(){
    Solution s;


}
