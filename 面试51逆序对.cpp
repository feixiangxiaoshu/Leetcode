class Solution {
public:
    long long count;
    int reversePairs(vector<int> &data) {
        count=0;
        if(data.size()!=0){
            mergeSort(data,0,data.size()-1);
        }
        cout<<count;
        for(vector<int>::iterator it=data.begin();it!=data.end();it++){
            cout<<*it;
        }

        return count;


    }


    void mergeSort(vector<int> &arr,long long  left,long long  right){
        if(left<right){
            long long mid=(left+right)/2;
            mergeSort(arr,left,mid);
            mergeSort(arr,mid+1,right);
            merge(arr,left,mid,mid+1,right);
        }
    }
    void merge(vector<int>&arr,long long  L1,long long  R1,long long  L2,long long  R2){
        vector<int> res;
        long long i=L1,j=L2;

        while(i<=R1&&j<=R2){
            if(arr[i]<=arr[j])
            {
                res.push_back(arr[i++]);
            }else{
                res.push_back(arr[j++]);
                count=(count+R1-i+1);


            }

        }
        while(i<=R1){
            res.push_back(arr[i++]);
        }
        while(j<=R2){
            res.push_back(arr[j++]);
        }
        for(int k=0;k<res.size();k++){
            arr[L1+k]=res[k];
        }
    }
};



class Solution {
public:
    int reversePairs(vector<int>& nums) {
        if(nums.size()<2) return 0;
        vector<int> tmp(nums);

        int res=countNum(nums,0,nums.size()-1,tmp);
        return res;
    }
    int countNum(vector<int> &nums,int left,int right,vector<int> &tmp){
        if(left==right){
            return 0;
        }
        int mid=left+(right-left)/2;
        int leftNum=countNum(nums,left,mid,tmp);
        int rightNum=countNum(nums,mid+1,right,tmp);
        if(nums[mid+1]>=nums[mid]){
            return leftNum+rightNum;
        }
        int crossNum=MergeCount(nums,left,right,tmp);
        return leftNum+rightNum+crossNum;
    }
    int MergeCount(vector<int> &nums,int left,int right,vector<int> &tmp){
        for(int i=left;i<=right;i++){
            tmp[i]=nums[i];
        }
        int mid=left+(right-left)/2;
        int i=left;
        int j=mid+1;
        int count=0;
        for(int m=left;m<=right;m++){
            if(i==mid+1){//到左部分的右边界了
                nums[m]=tmp[j++];
            }else if(j==right+1){//j到右边界了
                nums[m]=tmp[i++];
            }else if(tmp[i]<=tmp[j]){
                nums[m]=tmp[i++];
            }else{
                nums[m]=tmp[j++];
                count+=(mid+1-i);
            }
        }
        return count;
    }
};