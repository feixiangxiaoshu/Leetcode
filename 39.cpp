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
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int> > res;
        vector<int> path;
        if(candidates.size()==0) return res;
        sort(candidates.begin(),candidates.end());
        DFS(0,candidates,path,target,res);
        return res;

    }
    void DFS(int start,vector<int> vec,vector<int> &path,int target,vector<vector<int> > &res){
        if(target==0){
            vector<int> result(path);
            res.push_back(result);
            return ;
        }
//        if(target<0){
//            path.pop_back();
//            return;
//        }
        for(int i=start;i<vec.size()&&target-vec[i]>=0;i++){
            path.push_back(vec[i]);
            //cout<<vec[i];
            DFS(i,vec,path,target-vec[i],res);
            path.pop_back();
        }
    }
};


int main(){
    int arr[3]={2,3,5};
    vector<int> tmp;
    for(int i=0;i<3;i++){
        tmp.push_back(arr[i]);
    }
    Solution s;
    vector<vector<int> > res;
    res=s.combinationSum(tmp,8);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


}