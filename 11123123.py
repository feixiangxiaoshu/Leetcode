from typing import List


def lengthOfLIS(nums: List[int]) -> int:
        size = len(nums)
        if size < 2:
            return size
        tail = [nums[0]]

        for i in range(1, size):
            left = 0
            right = len(tail)
            while left < right:
                mid = (left + right) >> 1

                if tail[mid] < nums[i]:
                    left = mid + 1
                else:
                    right = mid
            if left == len(tail):
                tail.append(nums[i])
            else:
                tail[left] = nums[i]
        return len(tail)


if __name__ =="__main__":
    NandM = input()
    s=input()
    s=s.replace(' ','')
    maxlen=-1;
    for i in range(0,len(s)):
        tmp=s;
        tmp=s[0:i]+s[i+1:]
        maxlen=max(lengthOfLIS(tmp),maxlen)
    
    print(maxlen)
        