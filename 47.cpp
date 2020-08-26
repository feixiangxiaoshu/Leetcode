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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int len=nums.size();
        vector<vector<int> >res;
        vector<bool> used(len,0);
        vector<int> path;
        sort(nums.begin(),nums.end());
        DFS(nums,len,0,used,path,res);
        return res;

    }
    void DFS(vector<int> nums,int len,int depth,vector<bool> used,vector<int> path,vector<vector<int> > &res){
        if(len==depth){
            res.push_back(path);
            return ;
        }
        for(int i=0;i<len;i++){
            if(used[i]!=1){
                if (i > 0 && nums[i - 1] == nums[i] && !used[i - 1]) {//前一次重复 且没用过，就有可能重复 剪掉
                    continue;
                }
                path.push_back(nums[i]);
                used[i]=1;
                DFS(nums,len,depth+1,used,path,res);
                used[i]=0;
                path.pop_back();
            }
        }
    }
};

int main() {
    Solution s;

}
