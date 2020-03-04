# -*- coding: utf-8 -*-


class Solution(object):
    @staticmethod
    def canThreePartsEqualSum(A):
        """
        :type A: List[int]
        :rtype: bool
        """
        ans = sum(A)
        if ans % 3 != 0:
            return False
        avg = int(ans / 3)
        i = 0
        j = len(A) - 1
        res = False
        lans, rans = 0,0
        while i < j:
            if lans != avg:
                lans += A[i]
                i += 1
            if rans != avg:
                rans += A[j]
                j -= 1
            if lans == avg and rans == avg:
                res = True
                break
        return res


def test_canThreePartsEqualSum():
    print(Solution.canThreePartsEqualSum([0, 2, 1, -6, 6, -7, 9, 1, 2, 0, 1]))
    print(Solution.canThreePartsEqualSum([0, 2, 1, -6, 6, 7, 9, -1, 2, 0, 1]))
    print(Solution.canThreePartsEqualSum([3, 3, 6, 5, -2, 2, 5, 1, -9, 4]))

test_canThreePartsEqualSum()
