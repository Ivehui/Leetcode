
class ContainsDuplicate(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        return self.mergeSort(nums, 0, len(nums)-1)

    def mergeSort(self, array, left, right):
        """
        :type array: before sort
        :rtype: array: after sort
        """
        if left < right:
            middle = (right + left) / 2
            if self.mergeSort(array, left, middle) \
                    or self.mergeSort(array, middle + 1, right) \
                    or self.merge(array, left, middle, right):
                return True
            else:
                return False
        return False

    def merge(self, array, left, middle, right):
        l1 = middle - left + 1
        l2 = right - middle
        a1 = array[left:middle + 1]
        a2 = array[middle + 1:right + 1]
        a1.append(float("inf"))
        a2.append(float("inf"))
        i1 = 0
        i2 = 0
        for j in range(left, right + 1):
            if a1[i1] == a2[i2]:
                return True
            elif a1[i1] < a2[i2]:
                array[j] = a1[i1]
                i1 += 1
            else:
                array[j] = a2[i2]
                i2 += 1
        return False


if __name__ == '__main__':
    nums = []

    solution = ContainsDuplicate()
    print solution.containsDuplicate(nums)