#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(abs(target-sum)<abs(target-ans)){
                    ans=sum;
                }
                if(sum>target) r--;
                else if(sum<target) l++;
                else return sum;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
//    string test="abcd";
//    test.erase(test.begin());
//    cout<<test;
    cout<<s.isMatch("ab",".*");
}
