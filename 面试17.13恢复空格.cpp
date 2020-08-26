//
// Created by Administrator on 2020/7/12.
//

class Trie {
private:
    bool isEnd=0;
    Trie* next[26]={nullptr};
public:
    /** Initialize your data structure here. */
    Trie() {
    }

    /** Inserts a word into the trie. */
    void insert(string &word) {//以next存字母
        Trie* node=this;
        for(int i=word.size()-1;i>=0;i--){
            char c=word[i];
            if(node->next[c-'a']== nullptr){
                node->next[c-'a']=new Trie();
            }
            node=node->next[c-'a'];
        }
        node->isEnd= 1;//某个单词到头了
    }

    /** Returns if the word is in the trie. */
    vector<int> search(string &sentense,int endPos) {
        vector<int> indexRes;
        Trie* node=this;
        for(int i=endPos;i>=0;i--){
            char c=sentense[i];
            if(node->next[c-'a']== nullptr){
                break;
            }
            node=node->next[c-'a'];
            if(node->isEnd){
                indexRes.push_back(i);
            }
        }
        return indexRes;
    }
};
class Solution {
public:
    int respace(vector<string>& dictionary, string &sentence) {
        int len=sentence.size();
        Trie* root=new Trie();
        for(int i=0;i<dictionary.size();i++){
            root->insert(dictionary[i]);
        }
        int dp[len+1];
        dp[0]=0;
        for(int i=1;i<len+1;i++){
            dp[i]=dp[i-1]+1;//未识别
            for(auto index:root->search(sentence,i-1)){
                dp[i]=min(dp[i],dp[index]);
            }
        }
        return dp[len];
    }
};