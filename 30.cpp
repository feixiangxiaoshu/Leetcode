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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//class Solution { 超时答案 过不过看运气。。。。
//public:
//    vector<int> findSubstring(string s, vector<string>& words) {
//        vector<int> res;
//        if(words.size()==0||s.size()==0) return res;
//        unordered_map<string,int> mp;
//        for(int i=0;i<words.size();i++){
//            mp[words[i]]++;
//        }
//        int wordslen=words[0].size();
//        int slen=words[0].size()*words.size();
//        if(s.size()<slen) return res;
//        for(int i=0;i<=s.size()-slen;i++){
//            string tmpstring=s.substr(i,slen);
//            unordered_map<string,int> tmp=count(wordslen,tmpstring);
//            if(comparemap(tmp,mp)) res.push_back(i);
//        }
//        return res;
//    }
//    unordered_map<string,int> count(int wordslen,string s){
//        unordered_map<string,int> mp;
//        for(int i=0;i<s.size();i=i+wordslen){
//            mp[s.substr(i,wordslen)]++;
//        }
//        return mp;
//    }
//    bool comparemap(unordered_map<string,int>mp1,unordered_map<string,int>mp2){
//        for(unordered_map<string,int>::iterator it=mp1.begin();it!=mp1.end();it++){
//            if(mp2[it->first]!=it->second) return 0;
//        }
//        return 1;
//    }
//};
class Solution {//比参考的java时间和内存高很多
public:
    vector<int> findSubstring(string s, vector<string> &words) {
        vector<int> res;
        if (words.size() == 0 || s.size() == 0) return res;
        unordered_map<string, int> mp;
        for (int i = 0; i < words.size(); i++) {
            mp[words[i]]++;
        }
        int wordslen = words[0].size();
        int slen = words[0].size() * words.size();
        if (s.size() < slen) return res;
        for (int i = 0; i <= s.size() - slen; i++) {
            string tmpstring = s.substr(i, slen);
            unordered_map<string,int> tmp(mp);
            for(int j=0;j<s.size();j+=wordslen){
                string key=tmpstring.substr(j,wordslen);
                if(tmp.find(key)!=tmp.end()){
                    tmp[key]--;
                    if(tmp[key]==0) tmp.erase(key);
                }else{
                    break;
                }
            }
            if(tmp.size()==0) res.push_back(i);
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int> res;
    vector<string> tmp;
    tmp.push_back("word");
    tmp.push_back("good");
    tmp.push_back("best");
    tmp.push_back("word");
    res=s.findSubstring("wordgoodgoodgoodbestword",tmp);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }




}
