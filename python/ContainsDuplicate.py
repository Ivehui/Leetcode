
class ContainsDuplicate(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        d = {}
        for a in nums:
            if d.get(a, False):
                return True
            else:
                d[a] = True
        return False


if __name__ == '__main__':
    nums = [1, 1]

    solution = ContainsDuplicate()
    print solution.containsDuplicate(nums)