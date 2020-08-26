#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <set>
#include <cstring>
using namespace std;

vector<vector<int> > lcs(string s1,string s2){
    int len1=s1.size();
    int len2=s2.size();
    vector<vector<int> > res;
    vector<int>flag;
    for(int i=0;i<len1;i++){
        flag.push_back(0);
    }
    for(int i=0;i<len2+1;i++){
        vector<int>tmp;
        for(int j=0;j<len1+1;j++){
            tmp.push_back(0);
        }
        res.push_back(tmp);

    }
    for(int i=1;i<len2+1;i++){
        for(int j=1;j<len1+1;j++){
            if(s2[i-1]==s1[j-1]){
                flag[j-1]=1;
                res[i][j]=res[i-1][j-1]+1;
            }else{
                res[i][j]=max(res[i-1][j],res[i][j-1]);
            }
        }
    }
    string ss="";
    for(int i=0;i<flag.size();i++){
        cout<<flag[i];
    }
    cout<<endl;
    for(int i=0;i<len1;i++){
        if(flag[i]==1){
            ss+=s1[i];
        }
    }
    cout<<ss<<endl;
    return res;
}





int main(){
    vector<vector<int> >res;
    vector<vector<int> >flag;
    res=lcs("357486782","13456778");
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<res[res.size()-1][res[0].size()-1];
    cout<<endl;


    string s1="357486782";
    string s2="13456778";
    int i=s2.size();
    int j=s1.size();
    stack<char> sta;
    while(i>=1&&j>=1){
        if(s2[i-1]==s1[j-1]){
            sta.push(s2[i-1]);
            i--;
            j--;
        }else {
            if(res[i][j-1]>res[i-1][j]){
                j--;
            }else{
                i--;
            }
        }
    }
    while(!sta.empty()){
        cout<<sta.top();
        sta.pop();

    }








}
