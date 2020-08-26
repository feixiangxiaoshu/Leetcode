class Solution {
public:
    bool oneEditAway(string first, string second) {

        int len1=first.size();
        int len2=second.size();
        if(len1==0&&len2==0) return 1;
        if(len1==0&&len2==1) return 1;
        if(len2==0&&len1==1) return 1;
        if(len1==0||len2==0) return 0;
        if(abs(len1-len2)>1) return 0;
        if(len2>len1) return oneEditAway(second,first);
        for(int i=0;i<len2;i++){
            if(first[i]!=second[i]){
                if(len2==len1){
                    return first.substr(i+1,len1-i)==second.substr(i+1,len1-i);
                }else{
                    return first.substr(i+1,len1-i)==second.substr(i,len1-i);
                }
            }
        }
        return 1;
    }
};//
// Created by Administrator on 2020/6/4.
//

