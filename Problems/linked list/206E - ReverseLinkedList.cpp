/*
Name: 206. Reverse Linked List
Category: Linked List / Recursion
Dif: Easy

Problem: 
Given the head of a singly linked list, reverse the list, and return the reversed list.


Needed time: 4h
Submissions: 1
Working submissions: 1
First - last submission: 5 - 7.10.25

Runtime: 0ms - Beats 100%
Memory: 13.32mb - Beats 69.76%
*/

//linked list template from leetcode
struct ListNode { 
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *reverseList(ListNode* head) { 
	while(curr != nullptr) {
      next = curr->next; //save curr->next bc we change it before we need it
      
      curr->next = prev; //change the direction of the pointer from next => prev

      prev = curr; 	     //current curr becomes the previous Node for the next step
      curr = next;       //advance curr like normal
    }

    return prev; 		 //curr is a nullptr if we reach the last Node and with that prev is the actuall last (non null) node, and through head = prev 
						 //head (now last node) is the new first node => list reversed 
}