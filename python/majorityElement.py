import random
class MajorityElement(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        l = len(nums)
        return nums[l/2]





if __name__ == '__main__':
    nums = [3, 3, 3, 3, 5, 5]

    solution = MajorityElement()
    print solution.majorityElement(nums)