class Solution {
public:
    double new21Game(int N, int K, int W) {
        vector<double> dp(K+W,0);
        double sum=0;
        for(int i=K;i<K+W;i++){
            dp[i]=(i<=N?1.0:0.0);
            sum+=dp[i];
        }
        for(int i=K-1;i>=0;i--){
            dp[i]=sum/W;
            sum=sum+dp[i]-dp[i+W];
        }
        return dp[0];
    }
};//
// Created by Administrator on 2020/6/4.
//

