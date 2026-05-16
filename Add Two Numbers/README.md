# Add Two Numbers

## Problem Statement
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

## My Approach
1. Create a new List to store answer, by creating a node 'dummy'
2. Create a current pointer of node, to traverse the list 'dummy', set it initially to dummy
   ListNode* current = dummy;
3. Create a variable carry=0, to store the carry result
4. Traverse lists l1,l2 till l1 ends or l2 ends or if carry still exits
5. Create variables val1, val2 to insert values from nodes of l1,l2
6. If any list has ended, for ex. If l1 has ended, l2 still exists, so set val1 = 0
  So, to do this, initially set val1,val2 = 0, get the values into val1, val2 from the if condition, that if(l1!=0) val1 = l1->val
  So automatically if l1 has ended so val1 = 0
7. Do sum = val1+val2+carry, calculate carry as sum/10, and the digit as sum%10
    for ex. if sum=17, carry=17/10=1, digit=17%10=7
    We only consider only the digit during appending result into linked-list
8. Add digit to linked-list as, current->next = new ListNode(digit); it creates a new node with value as digit, which is the sum of both nodes of l1,l2
9. Move current pointer to next, current=current->next
10. Traverse lists l1 and l2 to next node if their next node exists, follow the entire same pattern
11. Return dummy->next, because dummy is the dummy node, with value as 0, so that it returns the entire list after dummy.
