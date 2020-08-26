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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int> > res;
        if(intervals.size()==0) return res;
        if(intervals.size()==1) return intervals;
        sort(intervals.begin(),intervals.end());
        vector<int> tmp=intervals[0];
        int i=0;
        for(i=1;i<=intervals.size()-1;i++){
            if(intervals[i-1][1]<intervals[i][0]){
                res.push_back(intervals[i-1]);
            }else{
                vector<int> tmp;
                tmp.push_back(intervals[i-1][0]);
                tmp.push_back(max(intervals[i-1][1],intervals[i][1]));
                intervals[i]=tmp;
            }
        }
        res.push_back(intervals[i-1]);
        return res;
    }
};
int main() {
    Solution s;

}
