#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;
//暴力法
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int maxArea=0;
//        int area=0;
//        for(int i=0;i<height.size();i++){
//            for(int j=i+1;j<height.size();j++){
//                area=(j-i)*min(height[i],height[j]);
//                maxArea=max(maxArea,area);
//            }
//        }
//        return maxArea;
//
//    }
//};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea=0;
        int area=0;
        int l=0;int r=height.size()-1;
        while(l<r){
            area=(r-l)*min(height[l],height[r]);
            maxArea=max(area,maxArea);
            if(height[l]<=height[r]) l++;
            else if(height[l]>height[r])  r--;
        }
        return maxArea;

    }
};
int main(){
    Solution s;

}
