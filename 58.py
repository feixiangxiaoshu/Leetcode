def lengthOfLastWord( s: str) -> int:
        if len(s)==0:
            return 0
        s=s.rstrip(" ")
        count=0
        for i in s[::-1]:
            if i!=" ":
                count+=1
            else:
                break
        return count

print(lengthOfLastWord("a "))
