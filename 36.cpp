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
    bool isValidSudoku(vector<vector<char>>& board) {
        return isNine(board)&&isHang(board)&&isLie(board);
    }
    bool isNine(vector<vector<char>>&vec){
        int x=0;int y=0;
        for(x=0;x<9;x=x+3){
            for(y=0;y<9;y=y+3){
                map<char,int> mp;
                for(int i=x;i<x+3;i++){
                    for(int j=y;j<y+3;j++){
                        if(vec[i][j]!='.')
                            mp[vec[i][j]]++;
                        else
                            continue;
                    }
                }
                for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
                    if(it->second==1)
                        continue;
                    else
                        return 0;
                }
            }
        }
        return 1;
    }
    bool isLie(vector<vector<char>>&vec){
        for(int j=0;j<9;j++){
            map<char,int> mp;
            for(int i=0;i<9;i++){
                if(vec[i][j]!='.')
                    mp[vec[i][j]]++;
                else
                    continue;
            }
            for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
                if(it->second==1)
                    continue;
                else
                    return 0;
            }
        }
        return 1;
    }
    bool isHang(vector<vector<char>>&vec){
        for(int i=0;i<9;i++){
            map<char,int> mp;
            for(int j=0;j<9;j++){
                if(vec[i][j]!='.')
                    mp[vec[i][j]]++;
                else
                    continue;
            }
            for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
                if(it->second==1)
                    continue;
                else
                    return 0;
            }
        }
        return 1;
    }
};

int main(){
   Solution s;
   cout<<"1:"<<s.countAndSay(1)<<endl;
   cout<<"2:"<<s.countAndSay(2)<<endl;
   cout<<"3:"<<s.countAndSay(3)<<endl;
   cout<<"4:"<<s.countAndSay(4)<<endl;
   cout<<"5:"<<s.countAndSay(5)<<endl;

}