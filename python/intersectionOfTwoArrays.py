class IntersectionOfTwoArrays(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        s1 = set(nums1)
        s2 = set(nums2)
        ss = s1 & s2
        return list(ss)


if __name__ == '__main__':
    nums1 = [1, 2, 2, 1]
    nums2 = [2, 2]

    solution = IntersectionOfTwoArrays()
    print solution.intersection(nums1, nums2)
