//
// Created by Administrator on 2020/6/27.
//

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=i+1){
                if(nums[i]<=0||nums[i]>nums.size()||nums[i]==nums[nums[i]-1]){
                    break;
                }
                int index=nums[i]-1;
                nums[i]=nums[index];
                nums[index]=index+1;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};