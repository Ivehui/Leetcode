class ReverseString(object):
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        l = len(s)
        if l < 2:
            return s
        _list1 = list(s)
        _list2 = list(s)
        ll = l - 1
        for i in range(l/2):
            j = ll - i
            _list1[i] = _list2[j]
            _list1[j] = _list2[i]
        return ''.join(_list1)

if __name__ == '__main__':
    solution = ReverseString()

    print solution.reverseString('')