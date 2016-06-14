class TitleToNumber(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        slist = list(s)
        l = len(s)
        num = 0
        for a in slist:
            num *= 26
            num += ord(a) - 64
        return num




if __name__ == '__main__':
    s = 'AZ'

    solution = TitleToNumber()
    print solution.titleToNumber(s)