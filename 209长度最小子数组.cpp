//
// Created by Administrator on 2020/6/28.
//

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int len=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int res=INT_MAX;
        while(right<len){
            sum+=nums[right];
            right++;
            while(sum>=s){
                sum-=nums[left];
                res=min(res,right-left);
                left++;
            }
        }
        return res==INT_MAX?0:res;

    }
};