class Solution:
    def isValid(self, s: str) -> bool:
        left = ("(", "{", "[")
        right = (")", "}", "]")
        li = []
        for i in s:
            if i in left:
                li.append(i)
                continue
            if i in right:
                try:
                    if left.index(li[-1]) == right.index(i):
                        li.pop()
                    else:
                        return False 
                except (ValueError, IndexError):
                    return False
                    
        if not li:
            return True


if __name__ == "__main__":
    print(Solution().isValid("[{}]"))
    print(Solution().isValid("[]{]}"))
    print(Solution().isValid("}"))
