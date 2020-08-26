class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int len=flowerbed.size();
        for(int i=0;i<len;i++){
            if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==len-1||flowerbed[i+1]==0)){
                flowerbed[i]=1;
                count++;
            }
        }
        return count>=n;
    }
};//
// Created by Administrator on 2020/6/12.
//

