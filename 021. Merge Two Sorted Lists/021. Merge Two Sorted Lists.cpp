/*

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]

*/

#include <iostream>
using namespace std;


struct Node {
    int val;
    Node* next;
    // Pointer pointing towards next node
};

void initNode(struct Node* head, int n) {
	head->val = n;
	head->next = NULL;
}

void addNode(struct Node* head, int n) {
	Node* newNode = new Node;
	newNode->val = n;
	newNode->next = NULL;

	Node* cur = head;
	while (cur) {
		if (cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void display(struct Node* head) {
	Node* list = head;
	while (list) {
		cout << list->val << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}



//Iterative Approach
Node* mergeTwoListsIterative(Node* list1, Node* list2)
{
    Node* dummy = new Node(); 
    Node* temp = dummy;

    //when both list1 and list2 isn't empty
    while (list1 && list2) 
	{
        if (list1->val < list2->val) 
		{
            temp->next = list1;
            list1 = list1->next;
        }
        else 
		{
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    // we reached at the end of one of the list
    if (list1) temp->next = list1;
    if (list2) temp->next = list2;

    return dummy->next;
}


//Recursive Approach
Node* mergeTwoListsRecursive(Node* list1, Node* list2)
{
	// if list1 happen to be NULL
	// we will simply return list2.
	if (list1 == NULL)
	{
		return list2;
	}

	// if list2 happen to be NULL
	// we will simply return list1.
	if (list2 == NULL)
	{
		return list1;
	}

	// if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
	// we wall call recursively l1 -> next and whole l2 list.
	if (list1->val <= list2->val)
	{
		list1->next = mergeTwoListsRecursive(list1->next, list2);
		return list1;
	}
	// we will call recursive l1 whole list and l2 -> next
	else
	{
		list2->next = mergeTwoListsRecursive(list1, list2->next);
		return list2;
	}
}

int main()
{
	struct Node* head1 = new Node;
	initNode(head1, 1);
	addNode(head1, 2);
	addNode(head1, 4);
	display(head1);

	cout << endl;

	struct Node* head2 = new Node;
	initNode(head2, 1);
	addNode(head2, 3);
	addNode(head2, 4);
	display(head2);

	cout << endl;

	Node* res = mergeTwoListsRecursive(head1, head2);
	display(res);

	return 0;
}