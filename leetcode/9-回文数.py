class Solution:
    def isPalindrome(self, x: int) -> bool:
        return str(x)[::-1] == str(x)

if __name__ == "__main__":
    print(Solution().isPalindrome(121))
    print(Solution().isPalindrome(120))
    print(Solution().isPalindrome(-123))
    print(Solution().isPalindrome(0))
