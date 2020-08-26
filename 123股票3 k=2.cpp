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
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;
        int len=prices.size(),k=2;
        vector<int> a(2,0);
        vector<vector<int>> b(k+1,a);
        vector<vector<vector<int>>> dp(len,b);
        for(int i=0;i<len;i++){
            for(int k=2;k>=1;k--){
                if(i-1==-1){
                    dp[i][k][0]=0;
                    dp[i][k][1]=-prices[i];
                    continue;
                }
                dp[i][k][0]=max(dp[i-1][k][0],dp[i-1][k][1]+prices[i]);
                dp[i][k][1]=max(dp[i-1][k][1],dp[i-1][k-1][0]-prices[i]);
            }
        }
        return dp[len-1][2][0];

    }
int main() {
    vector<vector<int> > res;


}


