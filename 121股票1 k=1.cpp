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
        int dp_i_0=0,dp_i_1=INT_MIN;
        for(int i=0;i<prices.size();i++){
            dp_i_0=max(dp_i_0,dp_i_1+prices[i]);
            dp_i_1=max(dp_i_1,-prices[i]);
        }
        return dp_i_0;
    }
};
int main() {
    vector<vector<int> > res;


}


