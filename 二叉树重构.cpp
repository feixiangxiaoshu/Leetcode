//
// Created by Administrator on 2020/5/23.
//

#include <iostream>
using namespace std;

struct Tree
{
    int data;
    Tree *lchild;
    Tree *rchild;
}tree;

Tree *Create(int a1[],int b1[],int n)
{
    int k;
    if(n<=0)
        return NULL;
    int root=a1[0];
    Tree *bt=(Tree *)malloc(sizeof(Tree));
    bt->data=root;
    for(k=0;k<n;k++)
    {
        if(b1[k]==root)
            break;//分割左右子树
    }
    bt->lchild=Create(a1+1,b1,k);
    bt->rchild=Create(a1+k+1,b1+k+1,n-k-1);
    return bt;
}

int same(Tree *x1,Tree *x2)
{
    if(x1->data!=x2->data)
        return -1;
    if(x1->data==x2->data)
    {
        if((x1->lchild==NULL&&x2->lchild==NULL)&&(x1->rchild!=NULL&&x2->rchild!=NULL))
            return same(x1->rchild,x2->rchild);
        if((x1->lchild!=NULL&&x2->lchild!=NULL)&&(x1->rchild==NULL&&x2->rchild==NULL))
            return same(x1->lchild,x2->lchild);
        if((x1->rchild!=NULL&&x2->rchild==NULL)||(x1->rchild==NULL&&x2->rchild!=NULL)||(x1->lchild!=NULL&&x2->lchild==NULL)||(x1->lchild==NULL&&x2->lchild!=NULL))
            return -1;
        if((x1->lchild==NULL&&x2->lchild==NULL)&&(x1->rchild==NULL&&x2->rchild==NULL))
            return 1;
        if((x1->lchild!=NULL&&x2->lchild!=NULL)&&(x1->rchild!=NULL&&x2->rchild!=NULL))
            return (same(x1->rchild,x2->rchild)==1&&same(x1->lchild,x2->lchild)==1);
    }
    return 1;
}

int main()
{
    Tree *rt1,*rt2;
    int is;
    int a1[107],b1[107],a2[107],b2[107],N;//N为总节点数，a为先序序列，b为中序序列
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>a1[i];
    for(int i=0;i<N;i++)
        cin>>b1[i];
    for(int i=0;i<N;i++)
        cin>>a2[i];
    for(int i=0;i<N;i++)
        cin>>b2[i];
    rt1=Create(a1,b1,N);//存树
    rt2=Create(a2,b2,N);
    is=same(rt1,rt2);
    if(is==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}