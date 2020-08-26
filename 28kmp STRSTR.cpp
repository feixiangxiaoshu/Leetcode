//
// Created by Administrator on 2020/8/24.
//
class Solution {
private:

public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0) return 0;
        if(haystack.size()==0) return -1;
        int m=needle.size();
        int dp[m][58];
        for(int i=0;i<m;i++){
            for(int j=0;j<58;j++){
                dp[i][j]=0;
            }
        }
        KMP(needle,dp);
        int res=find(haystack,needle,dp);
        return res;

    }
    void KMP(string needle,int dp[][58]){
        int len=needle.size();
        dp[0][needle[0]-65]=1;
        int x=0;
        for(int i=1;i<len;i++){
            for(int c=0;c<58;c++){
                if(needle[i]==c+65){
                    dp[i][c]=i+1;
                }else{
                    dp[i][c]=dp[x][c];
                }
            }
            x=dp[x][needle[i]-65];
        }
    }
    int find(string haystack,string needle,int dp[][58]){
        int len_needle=needle.size();
        int len=haystack.length();
        int j=0;
        for(int i=0;i<len;i++){
            j=dp[j][haystack[i]-65];
            if(j==len_needle) return i+1-j;
        }
        return -1;
    }
};
