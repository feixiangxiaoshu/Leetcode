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
    int uniquePaths(int m, int n) {
        vector<int> tmp(n,0);
        vector<vector<int> > res(m,tmp);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0||j==0)
                    res[i][j]=1;
                else{
                    res[i][j]=res[i-1][j]+res[i][j-1];
                }
            }
        }
        return res[m-1][n-1];
    }
};
int main() {
    Solution s;
    cout<<s.uniquePaths(4,3);

}

