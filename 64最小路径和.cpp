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
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0) return 0;
        int m=grid.size();
        int n=grid[0].size();
        vector<int> tmp(grid[0].size(),0);
        vector<vector<int> >dist(grid.size(),tmp);
        dist[m-1][n-1]=grid[m-1][n-1];
        for(int i=m-2;i>=0;i--){
            dist[i][n-1]=dist[i+1][n-1]+grid[i][n-1];
        }
        for(int j=n-2;j>=0;j--){
            dist[m-1][j]=dist[m-1][j+1]+grid[m-1][j];
        }
        for(int i=m-2;i>=0;i--){
            for(int j=n-2;j>=0;j--){
                dist[i][j]=grid[i][j]+min(dist[i+1][j],dist[i][j+1]);
            }
        }
        return dist[0][0];
    }
};
int main() {
    Solution s;
    vector<int>res1;
    res1.push_back(1);
    res1.push_back(3);
    res1.push_back(1);
    vector<int>res2;
    res2.push_back(1);
    res2.push_back(5);
    res2.push_back(1);
    vector<int>res3;
    res3.push_back(4);
    res3.push_back(2);
    res3.push_back(1);
    vector<vector<int> > res;
    res.push_back(res1);
    res.push_back(res2);
    res.push_back(res3);
    cout<<s.minPathSum(res);
}

