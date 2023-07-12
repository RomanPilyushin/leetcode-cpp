/*

Given the head of a linked list and an integer val, 
remove all the nodes of the linked list that has Node.val == val, and return the new head.


Example 1:
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]


Example 2:
Input: head = [], val = 1
Output: []


Example 3:
Input: head = [7,7,7,7], val = 7
Output: []


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


//Using current/prev node
Node* removeElementsCurrent(Node* head, int val)
{
	Node* root = head;
	Node* prev = nullptr;

	while (head != nullptr)
	{
		if (head->val == val) 
		{
			if (prev == nullptr)
				root = root->next;
			else
				prev->next = head->next;
		}
		else
			prev = head;
		head = head->next;
	}
	return root;
}

//Using compare next node
Node* removeElementsNext(Node* head, int val)
{
	while (head != nullptr && head->val == val)
		head = head->next;

	if (head == nullptr) return head;

	Node* res = head;
	while (head->next != nullptr) 
	{
		if (head->next->val == val)
			head->next = head->next->next;
		else
			head = head->next;
	}
	return res;
}


int main()
{
	Node* head1 = new Node;
	initNode(head1, 1);
	addNode(head1, 2);
	addNode(head1, 6);
	addNode(head1, 3);
	addNode(head1, 4);
	addNode(head1, 5);
	addNode(head1, 6);
	display(head1);

	Node* res = removeElementsNext(head1, 6);

	display(res);

	cout << endl;

	return 0;
}