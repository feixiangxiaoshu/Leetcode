class UF{
private:
    int count=0;
    vector<int> parent;
    vector<int> size;
public:
    UF(int n){
        this->count=n;
        parent.resize(n);
        size.resize(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    int find(int x){
        while(parent[x]!=x){
            parent[x]=parent[parent[x]];
            x=parent[x];
        }
        return x;
    }


    void un(int p,int q){
        int rootP=find(p);
        int rootQ=find(q);
        if(rootQ==rootP) return;
        if(size[rootP]<size[rootQ]){
            parent[rootP]=rootQ;
            size[rootQ]+=size[rootP];
        }else{
            parent[rootQ]=rootP;
            size[rootP]+=size[rootQ];
        }
        count--;
    }
    bool connect(int p,int q){
        int rootP=find(p);
        int rootQ=find(q);
        return rootQ==rootP;
    }
    int count_t(){
        return count;
    }
};
class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        UF *uf=new UF(M.size());
        for(int i=0;i<M.size();i++){
            for(int j=0;j<i;j++){
                if(M[i][j]==1){
                    uf->un(i,j);
                }
            }
        }
        return uf->count_t();
    }
};
//
// Created by Administrator on 2020/6/3.
//

