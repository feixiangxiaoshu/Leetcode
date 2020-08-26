def climbStairs(n: int) -> int:
        if(n==1):return 1
        if(n==2):return 2
        tmp1=1 
        tmp2=2
        res=0
        for i in range(3,n+1):
            res=tmp1+tmp2
            tmp1=tmp2
            tmp2=res
        return res
if __name__ == "__main__":
    print(climbStairs(5))