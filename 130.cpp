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
    void solve(vector<vector<char>>& board) {
        if(board.size()==0||board[0].size()==0) return ;
        int row=board.size();
        int col=board[0].size();
        int direct[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
        for(int i=0;i<row;i++){//每行开头和结尾
            if(board[i][0]=='O') DFS(board,i,0,direct,row,col);
            if(board[i][col-1]=='O') DFS(board,i,col-1,direct,row,col);
        }
        for(int j=0;j<col;j++){
            if(board[0][j]=='O') DFS(board,0,j,direct,row,col);
            if(board[row-1][j]=='O') DFS(board,row-1,j,direct,row,col);
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='B') board[i][j]='O';
            }
        }
    }
    void DFS(vector<vector<char>>& board,int m,int n,int direct[4][2],int row,int col){
        board[m][n]='B';
        for(int i=0;i<4;i++){
            int x=m+direct[i][0];
            int y=n+direct[i][1];
            if(x<0||x>=row||y<0||y>=col||board[x][y]!='O') continue;
            DFS(board,x,y,direct,row,col);
        }
    }
};
int main() {
    Solution s;
    s.solve()

}


