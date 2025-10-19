/*
Name: 203. Remove Linked List Elements
Category: Binary Search / Recursion
Dif: Easy

Problem: 
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.


Needed time: 2h
Submissions: 4
Working submissions: 2
First - last submission: 7 - 7.10.25

Runtime: 0ms - Beats 100%
Memory: 20.18mb - Beats 52.52%
*/

//linked list template from leetcode
struct ListNode { 
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *removeElements(ListNode *head, int val) {
  ListNode *fakeHead = new ListNode(INT_MIN); // helps handling edge cases, like deleting the head or when all nodes need to be removed 
  fakeHead->next = head; 

  ListNode *curr = fakeHead; 

  while(curr->next != nullptr) {
    if(curr->next->val == val) 
      curr->next = curr->next->next;    // if curr->next is the searched val, skip (and optionally delete) it
    else 
      curr = curr->next;                // otherwise, advance through list
    
  } 

  return fakeHead->next;                //return actual head 
}


