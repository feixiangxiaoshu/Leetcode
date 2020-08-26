//
// Created by Administrator on 2020/5/28.
//

class Solution {
public:
    string decodeString(string s) {
        int len=s.length();
        string res="";
        stack<int> nums;
        stack<string> strs;
        int num=0;
        for(int i=0;i<len;i++){
            if(s[i]>='0'&&s[i]<='9'){
                num=num*10+s[i]-'0';
            }else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
                res=res+s[i];
            }else if(s[i]=='['){
                strs.push(res);
                nums.push(num);
                num=0;
                res="";
            }else if(s[i]==']'){
                int times=nums.top();
                nums.pop();
                for(int j=0;j<times;j++){
                    strs.top()=strs.top()+res;
                }
                res=strs.top();
                strs.pop();
            }
        }
        return res;
    }
};