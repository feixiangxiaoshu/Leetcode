//
// Created by Administrator on 2020/8/1.
//

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int> > arr;
        for(int i=0;i<nums.size();i++){
            for(auto n:nums[i]){
                arr.push_back({n,i});
            }
        }
        sort(arr.begin(),arr.end());

        int i=0;int k=0;
        vector<int> ans;
        unordered_map<int,int> count;

        for(int j=0;j<arr.size();j++){
            if(!count[arr[j].second]){ //如果没有这个元素 窗口增加
                k++;
            }
            count[arr[j].second]++;//map内增加

            if(k==nums.size()){
                while(count[arr[i].second]>1){
                    count[arr[i].second]--;
                    i++;
                }
                if(ans.empty()||ans[1]-ans[0]>arr[j].first-arr[i].first){
                    ans=vector<int> {arr[i].first,arr[j].first};
                }
            }
        }
        return ans;
    }
};