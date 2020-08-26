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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int> > res;
        vector<int> tmp;
        res.push_back(tmp);
        sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            vector<int> path;
            dfs(nums,i,0,path,res);
        }
        return res;
    }
    void dfs(vector<int> nums,int len,int start,vector<int> path,vector<vector<int> > &res){
        if(path.size()==len){
            res.push_back(path);
            return ;
        }
        for(int i=start;i<nums.size();i++){
            if(i>start&&nums[i]==nums[i-1]){
                continue;
            }
            path.push_back(nums[i]);
            dfs(nums,len,i+1,path,res);
            path.pop_back();
        }
    }
};
int main() {
    
}

