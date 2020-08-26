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
    vector<vector<int>> generateMatrix(int n){
        vector<int> zero(n,0);
        vector<vector<int> > res(n,zero);
        if(n==0) return res;

        int count=n*n;
        int x=0,y=0,top=0,down=n-1,left=0,right=n-1;
        for(int i=1;i<count+1;i++){
            res[x][y]=i;
            if(x==top){
                if(y<right) y++;
                else if(y==right) x++;
                continue;
            }//往右走
            if(y==right){//往下走
                if(x<down)
                    x++;
                else if(x==down)
                    y--;
                continue;
            }
            if(x==down){//往左走
                if(y>left) y--;
                else if(y==left) x--;
                continue;
            }
            if(y==left){//向上走
                if(x>top+1)  x--;
                else if(x==top+1){
                    y++;
                    top++,left++,right--,down--;
                }
                continue;
            }
        }
        return res;
    }
};
int main() {
    Solution s;
    vector<vector<int> > res;
    res=s.generateMatrix(2);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<< res[i][j]<<" ";
        }
        cout<<endl;
    }

}

