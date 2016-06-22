class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        d = {}
        while not d.get(n, False):
            d[n] = True
            m = n
            n = 0
            while m > 0:
                n += (m % 10)**2
                m /= 10

        if n == 1:
            return True
        else:
            return False



if __name__ == '__main__':
    solution = Solution()

    # print solution.isPalindrome(1463847412) 2147483647 214747412
    print solution.isHappy(11)