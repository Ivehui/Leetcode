class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n > 0:
            return 3**19 % n == 0
        return False


if __name__ == '__main__':
    solution = Solution()

    # print solution.isPalindrome(1463847412) 2147483647 214747412
    print solution.isPowerOfThree(11)