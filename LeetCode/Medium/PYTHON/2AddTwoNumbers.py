import math

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1:[ListNode], l2:[ListNode]) ->[ListNode]:
        dummyHead = ListNode(0)
        currentHead = dummyHead
        rest = 0
        sum = 0
        while l1 != None or l2 != None or rest != 0:
            sum = 0
            if l1 != None:
                sum += l1.val
                l1 = l1.next
            if l2 != None:
                sum += l2.val
                l2 = l2.next
            if rest:
                sum += rest
            rest = math.floor(sum / 10)
            currentHead.next = ListNode(sum % 10)
            currentHead = currentHead.next
        result = dummyHead.next
        dummyHead.next = None
        return result


list1:[ListNode] = ListNode(1)
list1.next = ListNode(2)
list1.next.next = ListNode(3)

list2: [ListNode] = ListNode(4)
list2.next = ListNode(5)
list2.next.next = ListNode(6)

solution = Solution()

ans:[ListNode] = solution.addTwoNumbers(list1, list2)

print("List 1")
while list1 != None:
    print(list1.val, end=" ")
    list1 = list1.next

print("\nList 2")
while list2 != None:
    print(list2.val, end=" ")
    list2 = list2.next
    
print("\nSum")
while ans != None:
    print(ans.val, end=" ")
    ans = ans.next