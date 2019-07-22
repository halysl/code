class Solution:
    def twoSum(self, nums, target):
        temp_dict = {}
        for index, value in enumerate(nums):
            if temp_dict.get(target - value):
                return [temp_dict.get(target - value) - 1, index]
            temp_dict[value] = index + 1

if __name__ == "__main__":
    s = Solution().twoSum([2, 7, 11, 15], 9)
    print(s)
