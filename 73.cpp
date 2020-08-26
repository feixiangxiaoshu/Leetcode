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
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row;
        set<int> col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    cout<<"i"<<i<<endl;
                    cout<<"j"<<j<<endl;
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(set<int>::iterator it=row.begin();it!=row.end();it++){
            for(int j=0;j<matrix[*it].size();j++){
                matrix[*it][j]=0;
            }
        }
        for(set<int>::iterator it=col.begin();it!=col.end();it++){
            for(int i=0;i<matrix.size();i++){
                matrix[i][*it]=0;
            }
        }
    }


};
int main() {
    Solution s;
    vector< vector<int> > res;
    vector<int> res1;
    vector<int> res2;
    vector<int> res3;
    res1.push_back(1);
    res1.push_back(1);
    res1.push_back(1);
    res2.push_back(1);
    res2.push_back(0);
    res2.push_back(1);
    res3.push_back(1);
    res3.push_back(1);
    res3.push_back(1);
    res.push_back(res1);
    res.push_back(res2);
    res.push_back(res3);
    s.setZeroes(res);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout <<res[i][j]<<" ";

        }
        cout<<endl;
    }


}

