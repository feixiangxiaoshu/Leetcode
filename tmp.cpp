#include <iostream>
#include <string>
using namespace std;



int lengthOfLIS(string &nums) {
    int len = nums.size();
    if (len < 2) {
        return len;
    }

    string tail;
    tail.push_back(nums[0]);
    // tail 结尾的那个索引
    int end = 0;

    for (int i = 1; i < len; ++i) {
        if (nums[i] >tail[end]) {
            tail.push_back(nums[i]);
            end++;
        } else {
            int left = 0;
            int right = end;
            while (left < right) {
                int mid = (left + right) >> 1;
                if (tail[mid] < nums[i]) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            tail[left] = nums[i];
        }
    }
    return end + 1;
}

int main() {
    int n;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            s.erase(i,1);
        }
    }
    int maxLen=-1;
    for(int i=0;i<s.size();i++){
        string tmp=s;
        tmp.erase(i,1);
        maxLen=max(lengthOfLIS(tmp),maxLen);
    }
    cout<<maxLen;

}