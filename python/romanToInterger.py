class RomanToInt(object):
    d = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        l = len(s)
        sum = 0
        last = 0
        for i in range(l-1, -1, -1):
            temp = self.d[s[i]]
            if temp < last:
                sum -= temp
            else:
                last = temp
                sum += last
        return sum





if __name__ == '__main__':
    s = 'IV'

    solution = RomanToInt()
    print solution.romanToInt(s)