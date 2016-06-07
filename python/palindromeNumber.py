class PalindromeNumber(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        i = 9
        if x < 0:
            return False
        if x == 0:
            return True
        while x / 10**i == 0:
            i -= 1
        if i == 0:
            return True
        while i > 0:
            if x / 10**i != x % 10:
                return False
            x /= 10
            x %= 10**(i-1)
            i -= 2
        return True

if __name__ == '__main__':
    solution = PalindromeNumber()

    # print solution.isPalindrome(1463847412) 2147483647 214747412
    print solution.isPalindrome(214747412)
