//
// Created by Administrator on 2020/5/28.
//

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        int left=1;
        int right=len-1;
        while(left<right){
            int mid=left+(right-left)/2;
            int count=0;
            for(int num:nums){
                if(num<=mid) count++;
            }
            if(count>mid){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};