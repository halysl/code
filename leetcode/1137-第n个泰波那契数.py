# -*- coding: utf-8 -*-

class Solution(object):
    @staticmethod
    def tribonacci(n):
        """
        :type n: int
        :rtype: int
        """
        T = [0, 1, 1]
        if n < 3:
            return T[n]
        for i in range(3, n + 1):
            T = [T[1], T[2], sum(T)]
        return T[-1]


def get_tribonacci():
    print(Solution.tribonacci(1))
    print(Solution.tribonacci(5))
    print(Solution.tribonacci(10))
    print(Solution.tribonacci(20))
    print(Solution.tribonacci(40))
    print(Solution.tribonacci(80))

get_tribonacci()