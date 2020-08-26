//
// Created by Administrator on 2020/6/7.
//

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> sta;
        int ans=0;
        for(int i=0;i<height.size();i++){
            while(!sta.empty()&&height[sta.top()]<height[i]){
                int cur=sta.top();
                sta.pop();
                if(sta.empty()) break;
                int r=i;
                int l=sta.top();
                int h=min(height[l],height[r])-height[cur];
                ans+=(r-l-1)*h;
            }
            sta.push(i);
        }
        return ans;
    }
};