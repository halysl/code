# -*- coding: utf-8 -*-

class Solution:
    @staticmethod
    def findDisappearedNumbers(nums):
        for num in nums:
            index = abs(num) - 1
            nums[index] = -abs(nums[index])
        return [i + 1 for i, num in enumerate(nums) if num > 0]

def test_DisappearedNumbers():
    print(Solution.findDisappearedNumbers([4, 3, 2, 7, 8, 2, 3, 1]))
    print(Solution.findDisappearedNumbers([1, 2, 3, 4, 4, 5, 5, 7]))
    print(Solution.findDisappearedNumbers([1, 2, 2, 3, 4, 6, 6, 8]))
    print(Solution.findDisappearedNumbers([1, 1, 2, 3, 3, 4, 5, 6]))
