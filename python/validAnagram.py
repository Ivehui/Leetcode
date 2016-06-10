class ValidAnagram(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        ls = len(s)
        lt = len(t)
        if ls != lt:
            return False
        s = list(s)
        ss = set(s)
        ds = {}.fromkeys(ss, 0)


        for i in range(ls):
            ds[s[i]] += 1

        for i in range(lt):
            if ds.get(t[i], False) and ds[t[i]] != 0:
                ds[t[i]] -= 1
            else:
                return False

        return True



if __name__ == '__main__':
    s = 'anagram'
    t = 'nagaram'

    solution = ValidAnagram()
    print solution.isAnagram(s, t)