class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def rotate_right(head, k):
    """Rotate linked list to the right by k places."""
    if not head or not head.next or k == 0:
        return head
    length, curr = 1, head
    while curr.next:
        curr = curr.next
        length += 1
    k %= length
    if k == 0:
        return head
    curr.next = head
    for _ in range(length - k):
        curr = curr.next
    new_head = curr.next
    curr.next = None
    return new_head
