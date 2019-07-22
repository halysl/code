class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        count = 0
        for i in S:
            if i in J:
                count += 1
        return count

    def numJewelsInStones2(self, J: str, S: str) -> int:
        return sum([S.count(i) for i in J])
    
    def numJewelsInStones3(self, J: str, S: str) -> int:
        return len([1 for i in S if i in J])

if __name__ == "__main__":
    J = "aA"
    S = "aAAbbbb"
    print(Solution().numJewelsInStones(J, S))
    print(Solution().numJewelsInStones2(J, S))
    print(Solution().numJewelsInStones3(J, S))

    J = "z",
    S = "ZZ"
    print(Solution().numJewelsInStones(J, S))
    print(Solution().numJewelsInStones2(J, S))
    print(Solution().numJewelsInStones3(J, S))
