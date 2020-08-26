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
    int minimumTotal(vector<vector<int>>& triangle) {
        if(triangle.size()==0){
            return 0;
        }
        vector<int> tmp;
        tmp.push_back(0);
        triangle.insert(triangle.begin(),tmp);
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                int len=triangle[i].size();
                if(j==0){
                    triangle[i][j]=triangle[i-1][j]+triangle[i][j];
                }else if(j==len-1){
                    triangle[i][j]=triangle[i-1][j-1]+triangle[i][j];
                }else{
                    triangle[i][j]=min(triangle[i-1][j-1]+triangle[i][j],
                                       triangle[i-1][j]+triangle[i][j]);
                }
            }
        }
        return *min_element(triangle[triangle.size()-1].begin(),triangle[triangle.size()-1].end());
    }
};
int main() {
    vector<vector<int> > res;
    vector<int> m1;m1.push_back(2);
    vector<int> m2;m2.push_back(3);m2.push_back(4);
    vector<int> m3;m3.push_back(6);m3.push_back(5);m3.push_back(7);
    vector<int> m4;m4.push_back(4);m4.push_back(1);m4.push_back(8);m4.push_back(3);
    res.push_back(m1);
    res.push_back(m2);
    res.push_back(m3);
    res.push_back(m4);
    Solution s;
    cout<<s.minimumTotal(res);


}


