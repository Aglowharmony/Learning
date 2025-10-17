class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def reverse_k_group(head, k):
    """Reverse nodes in k-group."""
    dummy = ListNode(0, head)
    prev, end = dummy, dummy
    while True:
        count = 0
        while end and count < k:
            end = end.next
            count += 1
        if not end:
            break
        start = prev.next
        next_group = end.next
        end.next = None
        prev.next = reverse(start)
        start.next = next_group
        prev = start
        end = prev
    return dummy.next

def reverse(head):
    prev = None
    while head:
        nxt = head.next
        head.next = prev
        prev = head
        head = nxt
    return prev
