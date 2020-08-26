class Solution:
    def simplifyPath(self,path: str) -> str:
        path=path.split("/")
        stack=[]
        for item in path:
            if item=="..":
                if stack:
                    stack.pop()
            elif item and item!=".":
                stack.append(item)
        return "/"+"/".join(stack)


