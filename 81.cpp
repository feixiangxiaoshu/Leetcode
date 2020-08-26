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
    bool search(vector<int>& nums, int target) {
        if(nums.size()==0) return 0;
        int low=0;int high=nums.size()-1;
        int mid =0;
        while(low<=high){
            mid=low+(high-mid)/2;
            if(nums[mid]==target){
                return 1;
            }
            else if(nums[mid]==nums[low]){
                low++;
            }else if(nums[low]<nums[mid]){
                if(nums[mid]>target&&target>=nums[low]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(nums[mid]<target&&nums[high]>=target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return 0;

    }
};
int main() {
    Solution s;
    vector<int> res;
    res.push_back(1);
    res.push_back(3);res.push_back(1);res.push_back(1);
    cout<<s.search(res,3);

    
}

