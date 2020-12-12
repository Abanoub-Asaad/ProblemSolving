class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        sum = {}
        ind = len(nums)
        for i in range(ind):
            if nums[i] in sum:
                return [sum[nums[i]], i]
            else:
                sum[target - nums[i]] = i