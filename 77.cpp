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

//class Solution {
//public:
//    vector<vector<int>> combine(int n, int k) {
//        vector<vector<int> > res;
//        if(n==0) return res;
//        if(n<k) return res;
//        vector<int> nums;
//        for(int i=1;i<=n;i++){
//            nums.push_back(i);
//        }
//        int len=nums.size();
//        vector<bool> used(len,0);
//        vector<int> path;
//        DFS(nums,0,k,used,path,res);
//        return res;
//    }
//    void DFS(vector<int> nums,int step,int k,vector<bool> used,vector<int> &path,vector<vector<int> > &res){
//        if(step==k){
//            res.push_back(path);
//            return ;
//        }
//        for(int i=step;i<nums.size();i++){
//            if(!used[i]) {
//                if(path.empty()||nums[i]>path.back()){
//                    path.push_back(nums[i]);
//                    used[i] = 1;
//                    DFS(nums, step+1, k ,used, path, res);
//                    used[i] = 0;
//                    path.pop_back();
//                }else{
//                    continue;
//                }
//
//            }
//        }
//
//    }
//};
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int> > res;
        if(n==0) return res;
        if(n<k) return res;
        vector<int> path;
        DFS(n,k,1,path,res);
        return res;

    }
    void DFS(int n,int k,int begin,vector<int>&path,vector<vector<int> > &res){
        if(path.size()==k){
            vector<int> tmp(path);
            res.push_back(tmp);
            return ;
        }
        for(int i=begin;i<=n;i++){
            path.push_back(i);
            DFS(n,k,i+1,path,res);
            path.pop_back();
        }
    }
};
int main() {
    Solution s;
    vector<vector<int> >res;
    res=s.combine(4,2);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}

