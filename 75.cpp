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
    void sortColors(vector<int>& nums) {
        int p=nums[0];
        int p0=0;
        int p2=nums.size()-1;
        int i=0;
        while(i<=p2){
            if(nums[i]==0){
                swap(nums[i],nums[p0]);p0++;
            }else if(nums[i]==2){
                swap(nums[i],nums[p2]);p2--;
            }else{
                i++;
            }
        }
    }
};
int main() {
    Solution s;
    vector<int> res;
    res.push_back(1);
    res.push_back(2);
    res.push_back(0);
    s.sortColors(res);
    for(int i=0;i<res.size();i++){
        cout<< res[i]<<" ";
    }
}

