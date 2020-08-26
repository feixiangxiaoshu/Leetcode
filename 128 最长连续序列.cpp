class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int res=0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(st.find(num-1)==st.end()){
                int count=0;
                while(st.find(num)!=st.end()){
                    num++;
                    count++;
                }
                res=max(count,res);
            }

        }
        return res;
    }
};