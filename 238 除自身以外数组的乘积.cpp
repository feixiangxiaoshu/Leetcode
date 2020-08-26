//
// Created by Administrator on 2020/6/4.
//

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int len=nums.size();
        int tmp=1;
        for(int i=0;i<len;i++){
            res[i]=tmp;
            tmp*=nums[i];
        }
        tmp=1;
        for(int i=len-1;i>=0;i--){
            res[i]=res[i]*tmp;
            tmp=tmp*nums[i];
        }
        return res;
    }
};