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
    string getPermutation(int n, int k) {
        string s="123456789";
        string nums=s.substr(0,n);
        string ans;
        int looptimes=n;
        for(int i=0;i<looptimes;i++){
            n--;
            int group=(k-1)/fac(n);
            ans+=nums[group];
            nums.erase(nums.begin()+group);
            k=k-group*fac(n);
        }
        return ans;

    }
    int fac(int n){
        int res=1;
        for(int i=n;i>0;i--){
            res*=i;
        }
        return res;
    }
};
int main() {
    

}

