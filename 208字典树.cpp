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
    void insert(string word) {//以next存字母
        Trie* node=this;
        for(char c:word){
            if(node->next[c-'a']== nullptr){
                node->next[c-'a']=new Trie();
            }
            node=node->next[c-'a'];
        }
        node->isEnd= 1;//某个单词到头了
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* node=this;
        for(char c:word){
            node=node->next[c-'a'];
            if(node== nullptr) return 0;
        }
        return node->isEnd;

    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* node=this;
        for(char c:prefix){
            node=node->next[c-'a'];
            if(node== nullptr) return 0;
        }
        return 1;
    }
};