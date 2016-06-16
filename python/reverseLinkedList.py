# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class ReverseLinkList(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        temp = None
        while head:
            htemp = head
            head = head.next
            htemp.next = temp
            temp = htemp
        return temp

    def listDisplay(self, head):
        htemp = head
        while htemp:
            print htemp.val
            htemp = htemp.next


if __name__ == '__main__':
    a = ListNode(1)
    a.next = ListNode(2)
    b = a.next
    b.next = ListNode(3)
    b = b.next

    solution = ReverseLinkList()
    solution.listDisplay(a)
    solution.listDisplay(solution.reverseList(a))