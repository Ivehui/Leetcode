class Solution(object):
    def isUgly(self, num):
        """
        :type num: int
        :rtype: bool
        """
        m = [30, 15, 10, 6, 5, 3, 2]
        i = 0
        if num < 1:
            return False
        while num > 1:
            if num % m[i]:
                i += 1
                if i == 7:
                    return False
            else:
                num /= m[i]
        return True


if __name__ == '__main__':
    solution = Solution()

    # print solution.isPalindrome(1463847412) 2147483647 214747412
    print solution.isUgly(30)