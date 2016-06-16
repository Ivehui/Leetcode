class IntersectionOfTwoArrays(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        d = {}
        for num in nums1:
            d[num] = d[num] + 1 if d.get(num, False) else 1
        ss = []
        for num in nums2:
            if d.get(num, False) and d[num] > 0:
                ss.append(num)
                d[num] -= 1
        return ss


if __name__ == '__main__':
    nums1 = []#[1, 2, 2, 1]
    nums2 = []#[2, 2]

    solution = IntersectionOfTwoArrays()
    print solution.intersect(nums1, nums2)
