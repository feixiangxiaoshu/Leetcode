//
// Created by Administrator on 2020/6/16.
//

class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        return s1.size()==s2.size()&&(s1+s1).find(s2)!=-1;
    }
};