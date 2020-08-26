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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > res;
        if(strs.size()==0)
            return res;
        vector<string> vec(strs);
        for(int i=0;i<vec.size();i++){
            sort(vec[i].begin(),vec[i].end());
        }
        map<string,vector<int> > mp;
        for(int i=0;i<vec.size();i++){
            mp[vec[i]].push_back(i);
        }
        for(map<string,vector<int> >::iterator it=mp.begin();it!=mp.end();it++){
            vector<string> tmp;
            for(int i=0;i<it->second.size();i++){
                tmp.push_back(strs[it->second[i]]);
            }
            res.push_back(tmp);
        }
        return res;
    }
};

int main() {
    Solution s;
   
}
