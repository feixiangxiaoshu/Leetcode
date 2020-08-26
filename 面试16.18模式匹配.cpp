//
// Created by Administrator on 2020/6/22.
//

class Solution {
public:
    bool patternMatching(string p, string val) {
        if(p==""&&val=="") return 1;
        if(p=="") return 0;
        unordered_set<char> st;
        for(int i=0;i<p.size();i++){
            st.insert(p[i]);
        }
        if(val==""){
            if(st.size()==1) return 1;
            else return 0;
        }
        if(st.size()==1){
            if(val.size()%p.size()!=0) return 0;
            else {
                int length = val.size()/p.size();
                for(int i=0;i<val.size();i=i+length){
                    if(val.substr(i,length)==val.substr(0,length)){
                        continue;
                    }else{
                        return 0;
                    }
                }
                return 1;
            }
        }
        int count_a=count(p.begin(),p.end(),'a');
        int count_b=count(p.begin(),p.end(),'b');
        if(count_a==1||count_b==1) return 1;

        for(int i=0;i<val.size()/count_a;i++){
            int remain_len=val.size()-i*count_a;
            if(remain_len%count_b!=0) continue;
            int len_b=remain_len/count_b;
            set<string> st1;
            set<string> st2;
            int cur=0;
            for(auto tmp_char :p){
                if(tmp_char=='a'){
                    st1.insert(val.substr(cur,i));
                    cur=cur+i;

                }else{
                    st2.insert(val.substr(cur,len_b));
                    cur+=len_b;
                }
            }
            if(st1.size()==1&&st2.size()==1) return 1;


        }
        return 0;

    }
};