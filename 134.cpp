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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_gas=0;
        int remain_gas=0;
        int start_station=0;
        for(int i=0;i<n;i++){
            total_gas=total_gas+gas[i]-cost[i];
            remain_gas=remain_gas+gas[i]-cost[i];
            if(remain_gas<0){
                start_station=i+1;
                remain_gas=0;
            }
        }
        return total_gas>=0?start_station:-1;
    }
};

int main() {
    Solution s;
    auto t=0xf;
    cout<<s.toHex(26);

}


