class ReverseInteger(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x < 0:
            sign = -1
            x = -x
        else:
            sign = 1
        y = 0
        while x != 0:
            if y <= 214748364:
                y = y * 10 + x % 10
                x /= 10
            else:
                return 0
        return y * sign

if __name__ == '__main__':
    solution = ReverseInteger()

    print solution.reverse(1463847412)