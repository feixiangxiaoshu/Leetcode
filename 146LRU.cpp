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

class LRUCache {
private:
    int cap;
    list<pair<int,int> > cache;
    unordered_map<int,list<pair<int,int> >::iterator> mp;
public:
    LRUCache(int capacity) {
        this->cap=capacity;
    }

    int get(int key) {
        auto it=mp.find(key);
        if(it==mp.end()) return -1;
        pair<int,int> tmp=*(it->second);
        cache.erase(it->second);
        cache.push_front(tmp);
        it->second=cache.begin();
        return it->second->second;
    }

    void put(int key, int value) {
        auto it=mp.find(key);
        if(it!=mp.end()){//key存在 换值
            cache.erase(it->second);
            pair<int,int> tmp(key,value);
            cache.push_front(tmp);
            it->second=cache.begin();
        }else{//key不存在
            if(mp.size()==cap){
                auto last=cache.back().first;
                mp.erase(mp.find(last));
                cache.pop_back();
            }
            pair<int,int>tmp(key,value);
            cache.push_front(tmp);
            mp[key]=cache.begin();
        }
    }
};
int main() {
    Solution s;

}


