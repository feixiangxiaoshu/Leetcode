//
// Created by Administrator on 2020/7/12.
//

class Trie{
private:
    bool isNew=0;
    Trie* next[26]={nullptr};
public:
    Trie(){}

    int insert(string word){
        Trie* node=this;
        bool isNew=0;
        for(int i=word.size()-1;i>=0;i--){
            char c=word[i];
            if(node->next[c-'a']== nullptr){
                isNew=1;
                node->next[c-'a']=new Trie();
            }
            node=node->next[c-'a'];
        }
        return isNew?word.size()+1:0;

    }
};
class Solution {
public:
    static bool compare(string s1,string s2){
        return s1.size()>s2.size();
    }
    int minimumLengthEncoding(vector<string>& words) {

        int len=0;
        Trie* root=new Trie();
        sort(words.begin(),words.end(),compare);
        for(int i=0;i<words.size();i++){
            len+=root->insert(words[i]);
        }
        return len;
    }
};
