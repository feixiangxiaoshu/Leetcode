//
// Created by Administrator on 2020/6/17.
//

class Solution {
public:
    int superEggDrop(int K, int N) {
        vector<int> tmp(K+1,99999);
        vector<vector<int> > dp(N+1,tmp);
        for(int i=0;i<N+1;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<K+1;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<N+1;i++){
            dp[i][1]=i;
        }
        for(int j=1;j<K+1;j++){
            dp[1][j]=1;
        }
        for(int i=2;i<N+1;i++){
            for(int j=2;j<K+1;j++){
                int left=1;
                int right=i;
                while(left<right){
                    int mid=left+(right-left+1)/2;
                    int breakcount=dp[mid-1][j-1];
                    int notbreak=dp[i-mid][j];
                    if(breakcount>notbreak){
                        right=mid-1;
                    }else{
                        left=mid;
                    }

                }
                dp[i][j]=min(dp[i][j],max(dp[left-1][j-1],dp[i-left][j])+1);
            }
        }
        return dp[N][K];

    }
};

class Solution {
public:
    int calc(int K,int T){
        if(T==1||K==1) return T+1;
        return calc(K-1,T-1)+calc(K,T-1);
    }
    int superEggDrop(int K, int N) {
        int T=1;
        while(calc(K,T)<N+1) T++;
        return T;
    }
};