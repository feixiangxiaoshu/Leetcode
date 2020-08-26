#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;



#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
#include<stack>
#include<map>
#include<math.h>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <cstring>
#include <sstream>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        if(digits.empty()) return res;
        int len=digits.size()-1;
        int tmp=digits[len]+1;
        int sign=0;
        if(tmp<10){
            digits[len]=tmp;
            return digits;
        }else{
            digits[len]=tmp-10;
            sign=1;
        }
        for(int i=len-1;i>=0;i--){
            int num=digits[i]+sign;
            if(num<10){
                digits[i]=num;
                return digits;
            }else{
                digits[i]=num-10;
                sign=1;
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
int main() {
    vector<int> res;
    res.push_back(9);
    res.push_back(9);
    res.push_back(9);
    res.push_back(9);
    Solution s;
    s.plusOne(res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}

