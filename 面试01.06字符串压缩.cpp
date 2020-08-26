class Solution {
public:
    string compressString(string S) {
        string res="";
        int i=0,j=0;
        while(j<S.size()){
            while(S[i]==S[j]) j++;
            res +=S[i]+to_string(j-i);
            i=j;
        }
        return res.size()<S.size()?res:S;
    }
};
//
// Created by Administrator on 2020/6/4.
//

