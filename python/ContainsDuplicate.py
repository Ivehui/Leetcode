class ContainsDuplicate(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        l = len(nums)
        numSet = set(nums)
        if l > len(numSet):
            return True
        else:
            return False


if __name__ == '__main__':
    nums = [1, 1, 3]

    solution = ContainsDuplicate()
    print solution.containsDuplicate(nums)