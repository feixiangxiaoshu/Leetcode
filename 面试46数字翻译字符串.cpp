class Solution {
public:
    int translateNum(int num) {
        stringstream ss;
        ss<<num;
        string s;
        ss>>s;
        int len=s.size();
        int a=1,b=1;
        for(int i=1;i<len;i++){
            string tmp=s.substr(i-1,2);
            int c=0;
            if(tmp>="10"&&tmp<="25"){
                c=a+b;
            }else{
                c=b;
            }
            a=b;
            b=c;
        }
        return b;
    }
};