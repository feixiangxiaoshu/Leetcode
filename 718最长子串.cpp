//
// Created by Administrator on 2020/7/2.
//

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int lena=A.size();
        int lenb=B.size();
        int max_len=0;
        int dp[lenb+1][lena+1];
        for(int i=0;i<lenb+1;i++){
            for(int j=0;j<lena+1;j++){
                dp[i][j]=0;
            }
        }
        for(int i=1;i<lenb+1;i++){
            for(int j=1;j<lena+1;j++){
                if(B[i-1]==A[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    max_len=max(max_len,dp[i][j]);
                }else{
                    continue;
                }
            }
        }
        return max_len;
    }
};