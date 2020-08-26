//
// Created by Administrator on 2020/6/17.
//

class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        int res=-1000000;
        int max_i=0;
        for(int i=1;i<A.size();i++){
            max_i=max(A[i-1]+i-1,max_i);
            res=max(max_i+A[i]-i,res);
        }
        return res;
    }
};