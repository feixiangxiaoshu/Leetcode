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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return 0;
        if(matrix[0].size()==0) return 0;
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;int right=m*n-1;
        int mid=-1;int i=-1,j=-1;
        while(left<=right){
            mid=left+(right-left)/2;
            i=mid/n; j=mid%n;
            if(matrix[i][j]==target)
                return 1;
            else if(matrix[i][j]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }

        }
        return 0;
    }
};
int main() {
    Solution s;
    s.searchMatrix()
}

