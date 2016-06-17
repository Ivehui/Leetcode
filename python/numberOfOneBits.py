class Solution(object):
    d = [0, 1, 1, 2, 1, 2, 2, 3]
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        s = 0
        while n > 0:
            s += self.d[n % 8]
            n /= 8
        return s

if __name__ == '__main__':
    solution = Solution()

    # print solution.isPalindrome(1463847412) 2147483647 214747412
    print solution.hammingWeight(11)