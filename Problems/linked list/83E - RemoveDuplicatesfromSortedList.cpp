/*
Name: 83. Remove Duplicates from Sorted List
Category: Linked List
Dif: Easy

Problem: 
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.


Needed time: 1h
Submissions: 4
Working submissions: 3
First - last submission: 8 - 8.10.25

Runtime: 0ms - Beats 100%
Memory: 16.13mb - Beats 68.69%
*/

//linked list template from leetcode
struct ListNode { 
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *deleteDuplicates(ListNode *head) {

  if(head == nullptr)
    return head; 

  ListNode *dummy = new ListNode(INT_MIN); // helps handling edge cases, like deleting the head or when all nodes need to be removed 
  dummy->next = head; 

  ListNode *tmp = dummy->next; 

  while(tmp->next != nullptr) {
    if(tmp->val == tmp->next->val) { 	   // val found
      ListNode *delTmp = tmp->next; 	   // safe tmp->next for deletion 
      tmp->next = tmp->next->next; 	       // change tmp->next
      delete delTmp; 				 	   // delete Node with value
    }
    else {
      tmp = tmp->next; 
    }
  }

  delete dummy;
  return head; 
}