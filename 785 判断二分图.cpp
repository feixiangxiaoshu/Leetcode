//
// Created by Administrator on 2020/7/16.
//

class Solution {
private:
    int uncolor=0;
    int red=1;
    int green=2;
    vector<int> color;
    bool valid;

public:
    void DFS(int node,int c,vector<vector<int> > &graph){
        color[node]=c;//上色
        int cNeighbor=(c==red?green:red);
        for(auto neighbor:graph[node]){
            if(color[neighbor]==uncolor){//没上色 递归深度遍历
                DFS(neighbor,cNeighbor,graph);
                if(!valid){
                    return ;
                }
            }
            else if(color[neighbor]!=cNeighbor){//着色了 和cNeighbor不一样
                valid=false;
                return ;
            }
        }

    }
    bool isBipartite(vector<vector<int> >& graph) {
        int n=graph.size();
        valid=true;
        color.assign(n,0);
        for(int i=0;i<n&&valid;i++){
            if(color[i]==uncolor){
                DFS(i,red,graph);
            }
        }
        return valid;

    }
};