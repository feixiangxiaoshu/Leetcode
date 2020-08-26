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
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> >res;
        vector<int> tmp;
        res.push_back(tmp);
        if(nums.size()==0) return res;
        int len=nums.size();
        for(int i=1;i<=len;i++){
            vector<int> path;
            DFS(nums,i,0,path,res);
        }
        return res;
    }
    void DFS(vector<int> nums,int len,int begin,vector<int> path,vector<vector<int> >&res){
        if(path.size()==len){
            res.push_back(path);
            return ;
        }
        for(int i=begin;i<nums.size();i++){
            path.push_back(nums[i]);
            DFS(nums,len,i+1,path,res);
            path.pop_back();
        }

    }
};
int main() {
    Solution s;
    
}

