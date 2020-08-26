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
    bool isArea(int x,int y,vector<vector<char>>& board){
        return x>=0&&x<board.size()&&y>=0&&y<board[0].size();
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<int> tmp(board[0].size(),0);
        vector<vector<int> >marked(board.size(),tmp);
        int arr[4][4]={{-1,0},{1,0},{0,1},{0,-1}};

        if(board.size()==0) return 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(helper(i,j,0,arr,marked,word,board)){
                    return 1;
                }
            }
        }
        return 0;
    }
    bool helper(int i,int j,int tmp_len,int arr[4][4],vector<vector<int> >&marked,string word,vector<vector<char> >&board){
        if(tmp_len==word.length()-1){
             return board[i][j]==word[tmp_len];
        }
        if(board[i][j]==word[tmp_len]){
            marked[i][j]=1;
            for(int k=0;k<4;k++){
                int new_x=i+arr[k][0];
                int new_y=j+arr[k][1];
                if(isArea(new_x,new_y,board)&&!marked[new_x][new_y]){
                    if(helper(new_x,new_y,tmp_len+1,arr,marked,word,board)){
                        return 1;
                    }
                }
            }
            marked[i][j]=0;
        }
        return 0;
    }
};
int main() {
    Solution s;
    
}

