//
// Created by Administrator on 2020/6/15.
//

class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int len=arr.size();
        int sum=0;
        for(int i=0;i<len;i++){
            int x=(target-sum)/(len-i);
            if(x<arr[i]){
                double t=((double)(target-sum))/(len-i);
                if(t-x>0.5) return x+1;
                else return x;
            }
            sum+=arr[i];

        }
        return arr[len-1];
    }
};