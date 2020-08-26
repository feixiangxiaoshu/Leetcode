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
    bool wordBreak(string s, vector<string>& wordDict) {
        int len=s.length();
        set<string> st;
        vector<bool> dp(len,0);
        for(auto tmp:wordDict){
            st.insert(tmp);
        }
        for(int r=0;r<len;r++){
            if(st.count(s.substr(0,r+1))!=0){
                dp[r]=1;
                continue;//有一个成立就行 不用全部遍历
            }
            for(int l=0;l<r;l++){
                if(dp[l]&&st.count(s.substr(l+1,r+1-l-1))!=0){
                    dp[r]=1;
                    break;
                }
            }
        }
        return dp[len-1];

    }
};

class Solution1 {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(),wordList.end());
        if(!dict.count(endWord)){
            return 0;
        }
        unordered_set<string> q1{beginWord};
        unordered_set<string> q2{endWord};
        int len=beginWord.length();
        int step=0;
        while(!q1.empty()&&!q2.empty()){
            step++;
            if(q1.size()>q2.size()){
                swap(q1,q2);
            }
            unordered_set<string> q;
            for(auto w:q1){
                for(int i=0;i<len;i++){
                    char tmp=w[i];
                    for(int j='a';j<='z';j++){
                        if(j==tmp) continue;
                        w[i]=tmp;
                        if(q2.count(w)) return step+1;
                        if(dict.count(w)==0) continue;
                        dict.erase(w);
                        q.insert(w);
                    }
                    w[i]=tmp;
                }
            }
            swap(q,q1);
        }
        return 0;

    }
};



int main() {
    Solution s;
    s.solve()

}


