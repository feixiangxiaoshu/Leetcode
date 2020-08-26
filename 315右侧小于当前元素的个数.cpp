//
// Created by Administrator on 2020/7/11.
//

class Solution {
private:
    vector<int> tmp;
    vector<int> index;
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> res;
        res=vector<int> (nums.size(),0);
        int len=nums.size();
        if(len==0) return res;
        tmp=vector<int> (nums);
        index=vector<int> (nums);//索引数组  归并交换的是索引，方便统计时 用原数据交换；否则原数据索引会乱
        for(int i=0;i<len;i++){
            index[i]=i;
        }
        mergeCount(nums,0,len-1,res);
        return res;

    }
    void mergeCount(vector<int> &nums,int left,int right,vector<int> &res){
        if(left==right){
            return ;
        }
        int mid=left+(right-left)/2;
        mergeCount(nums,left,mid,res);
        mergeCount(nums,mid+1,right,res);
        if(nums[index[mid]]>nums[index[mid+1]]){//存在跨序列逆序
            mergeArrCount(nums,left,right,res);
        }
    }
    void mergeArrCount(vector<int> &nums,int left,int right,vector<int> &res){
        for(int i=left;i<=right;i++){
            tmp[i]=index[i];
        }
        int mid=left+(right-left)/2;
        int i=left;
        int j=mid+1;
        for(int m=left;m<=right;m++){
            if(i>mid){
                index[m]=tmp[j++];
            }else if(j>right){
                index[m]=tmp[i++];
                res[index[m]]+=(right-mid);
            }else if(nums[tmp[i]]<=nums[tmp[j]]){
                index[m]=tmp[i++];
                res[index[m]]+=(j-mid-1);
            }else{
                index[m]=tmp[j++];
            }
        }
    }
};
