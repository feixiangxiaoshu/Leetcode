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
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty()) return res;
        int count=matrix[0].size()*matrix.size();
        int x=0,y=0,top=0,down=matrix.size()-1,left=0,right=matrix[0].size()-1;
        for(x=0,y=0;count>0;count--){
            res.push_back(matrix[x][y]);
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

}
