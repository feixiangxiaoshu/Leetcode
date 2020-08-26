class Solution:
    def reverse(self,x: int) -> int:
        if x>=0 and x<=9:
            return x
        tmp=str(x)
        res=""
        if x>0:
            if tmp[0]=='+':
                res=tmp[:0:-1]
            else:
                res=tmp[::-1]
                
            
        if x<0:
            res=tmp[:0:-1]
            res='-'+res
        
        res=int(res)
        
        if res>=(-2)**31 and res<=2**31-1:
            return res
        else:
            return 0







        
