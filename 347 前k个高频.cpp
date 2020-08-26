//
// Created by Administrator on 2020/7/4.
//

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(q.size()<k){
                q.push(make_pair(it->second,it->first));
            }else{
                if(it->second>q.top().first){
                    q.pop();
                    q.push(make_pair(it->second,it->first));
                }
            }
        }
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
    }
};