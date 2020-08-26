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
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }

        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size()/2;j++){
                swap(matrix[i][j],matrix[i][matrix[i].size()-1-j]);
            }
        }
    }
};

int main() {
    Solution s;
    vector<vector<int> > res;
    vector<int> res1,res2,res3;
    res1.push_back(1);
    res1.push_back(2);
    res1.push_back(3);
    res2.push_back(4);
    res2.push_back(5);
    res2.push_back(6);
    res3.push_back(7);
    res3.push_back(8);
    res3.push_back(9);
    res.push_back(res1);
    res.push_back(res2);
    res.push_back(res3);
    s.rotate(res);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<< res[i][j]<<" ";
        }
        cout<<endl;
    }

}
