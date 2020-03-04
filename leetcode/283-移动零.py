# -*- coding: utf-8 -*-


class Solution(object):
    @staticmethod
    def moveZeroes(nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        zero_point = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                nums[i], nums[zero_point] = nums[zero_point], nums[i]
                zero_point += 1
        return nums
    

def test_moveZeroes():
    res1 = Solution.moveZeroes([0, 1, 0, 3, 12])
    res2 = Solution.moveZeroes([0, 0, 0, 3, 12])
    res3 = Solution.moveZeroes([1, 0, 0, 3, 12])
    base_res = [1, 3, 12, 0, 0]
    assert res1 == base_res
    assert res2 == [3, 12, 0, 0, 0]
    assert res3 == base_res
    print(res1)
    print(res2)
    print(res3) 

test_moveZeroes()
