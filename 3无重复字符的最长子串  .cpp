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
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> tmp;
        int maxLen=0;
        int left=0;
        for(int i=0;i<s.size();i++){
            while(tmp.find(s[i])!=tmp.end()){//找到相同元素 删除，左侧移动
                tmp.erase(s[left]);
                left++;
            }
            tmp.insert(s[i]);//没找到，加入set，
            maxLen=max(maxLen,i-left+1);//长度选大的那个
        }
        return maxLen;

    }
};

int main(){
    Solution t;
    cout<<t.lengthOfLongestSubstring("abcabcbb");





}
