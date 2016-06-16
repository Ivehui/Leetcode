# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        if root == p or root == q:
            return root
        sp = self.match(root, p)
        sq = self.match(root, q)
        back = root
        spl = sp % 2
        sql = sq % 2
        while spl == sql:
            sp /= 2
            sq /= 2
            if spl == 0:
                back = back.left
            else:
                back = back.right
            if sp == 1 or sq == 1:
                return back
            spl = sp % 2
            sql = sq % 2
        return back


    def match(self, root, p):
        if root:
            if root.left == p:
                return 2
            elif root.right == p:
                return 3
            else:
                temp = self.match(root.right, p)
                if temp:
                    return temp * 2 + 1
                else:
                    return 2 * self.match(root.left, p)
        return 0

    def display(self, root):
        if root:
            print root.val
            self.display(root.left)
            self.display(root.right)



if __name__ == '__main__':
    a = TreeNode(1)
    b = TreeNode(2)
    c = TreeNode(3)
    a.left = b
    a.right = c
    c = TreeNode(4)
    b.left = c
    c = TreeNode(5)
    b.right = c

    solution = Solution()
    solution.display(a)
    print ''
    solution.display(b)
    print ''
    solution.display(c)
    print ''
    solution.display(solution.lowestCommonAncestor(a, b, c))