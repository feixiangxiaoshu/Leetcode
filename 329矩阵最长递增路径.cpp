//
// Created by Administrator on 2020/5/25.
//
class Point {
public:
    int x, y, v;
    Point(int ix, int iy, int iv) {
        x = ix;
        y = iy;
        v = iv;
    }
};

#define MAX(x,y) ((x>y)?(x):(y))
class Solution { // DFS搜索
public:
    int rows, cols;
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        rows = matrix.size();
        if(!rows) return 0;
        cols = matrix[0].size();
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        int ret = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                ret = MAX(ret,DFS(matrix, visited, i, j,INT_MIN));
            }
        }
        return ret;

    }
    int DFS(vector<vector<int>> &matrix, vector<vector<int>> &visited, int i, int j, int lastvalue) {
        if (i < 0 || i >= rows || j < 0 || j >= cols)
            return 0;
        int curvalue = matrix[i][j];
        if (curvalue <= lastvalue)
            return 0;
        int u, r, l, d;
        if (!visited[i][j]) {
            u = DFS(matrix, visited, i+1, j, curvalue);
            r = DFS(matrix, visited, i, j+1, curvalue);
            l = DFS(matrix, visited, i, j-1, curvalue);
            d = DFS(matrix, visited, i-1, j, curvalue);
            visited[i][j] =1 + MAX(MAX(u, r), MAX(l, d));
        }
        return visited[i][j];
    }
};


