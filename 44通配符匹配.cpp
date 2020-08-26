//
// Created by Administrator on 2020/7/5.
//

class Solution {
public:
    bool isMatch(string s, string p) {
        int len1=s.size();
        int len2=p.size();
        bool dp[len1+1][len2+1];
        for(int i=0;i<=len1;i++){
            for(int j=0;j<=len2;j++){
                dp[i][j]=0;
            }
        }
        dp[0][0]=1;
        for(int j=1;j<len2+1;j++){
            dp[0][j]=dp[0][j-1]&&(p[j-1]=='*');
        }
        for(int i=1;i<len1+1;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<len1+1;i++){
            for(int j=1;j<len2+1;j++){
                if(s[i-1]==p[j-1]||p[j-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }else if(p[j-1]=='*'){
                    dp[i][j]=dp[i][j-1]||dp[i-1][j];
                }
            }
        }
        return dp[len1][len2];
    }
};