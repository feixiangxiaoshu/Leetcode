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
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(),wordList.end());
        if(dict.count(endWord)==0) return 0;
        queue<string> q;
        dict.erase(endWord);
        dict.erase(beginWord);
        q.push(beginWord);
        int len=beginWord.size();
        int step=0;
        while(!q.empty()){
            step++;
            int q_size=q.size();
            for(int size=0;size<q_size;size++){
                string w=q.front();
                q.pop();
                for(int i=0;i<len;i++){
                    char tmp=w[i];
                    for(int j='a';j<='z';j++){
                        if(tmp==j) continue;
                        w[i]=j;
                        if(w==endWord) return step+1;
                        if(dict.count(w)==0) continue;
                        dict.erase(w);
                        q.push(w);
                    }
                    w[i]=tmp;
                }
            }
        }
        return 0;
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


