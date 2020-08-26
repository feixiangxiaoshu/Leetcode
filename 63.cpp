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
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0]==1)
            return 0;
        int n=obstacleGrid[0].size();
        int m=obstacleGrid.size();
        vector<long> tmp(n,0);
        vector<vector<long> > dp(m,tmp);
        dp[0][0]=1;
        for(int i=1;i<m;i++){
            dp[i][0]=(obstacleGrid[i][0]==0&&dp[i-1][0]==1)?1:0;
        }
        for(int j=1;j<n;j++){
            dp[0][j]=(obstacleGrid[0][j]==0&&dp[0][j-1]==1)?1:0;
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=(obstacleGrid[i][j]==1?0:dp[i-1][j]+dp[i][j-1]);
            }
        }
        return dp[m-1][n-1];
    }
};
int main() {
    Solution s;
}

