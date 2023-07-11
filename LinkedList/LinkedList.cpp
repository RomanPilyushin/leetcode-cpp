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

	return 0;
}