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
#include <list>
using namespace std;

class Solution {
public:
    int maxProfit(int kk, vector<int>& prices) {
        int len=prices.size();
        if(len==0) return 0;
        if(kk>len/2){
            return helper(prices);
        }
        vector<int> a(2,0);
        vector<vector<int>> b(kk+1,a);
        vector<vector<vector<int>>> dp(len,b);
        for(int i=0;i<len;i++){
            for(int k=kk;k>=1;k--){
                if(i-1==-1){
                    dp[i][k][0]=0;
                    dp[i][k][1]=-prices[i];
                    continue;
                }
                dp[i][k][0]=max(dp[i-1][k][0],dp[i-1][k][1]+prices[i]);
                dp[i][k][1]=max(dp[i-1][k][1],dp[i-1][k-1][0]-prices[i]);
            }
        }
        return dp[len-1][kk][0];

    }
    int helper(vector<int>& prices) {
        int dp_i_0=0,dp_i_1=INT_MIN;
        for(int i=0;i<prices.size();i++){
            dp_i_0=max(dp_i_0,dp_i_1+prices[i]);
            dp_i_1=max(dp_i_1,dp_i_0-prices[i]);
        }
        return dp_i_0;
    }
};
int main() {
    vector<vector<int> > res;


}


