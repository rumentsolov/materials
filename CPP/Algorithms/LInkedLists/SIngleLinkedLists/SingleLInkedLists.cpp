//Minimize the memory allocation work algorithm

#include <iostream>

class Node {
public:
	int data;
	Node* next;
	Node(int value) : data(value), next(NULL) {}
};

void insertAtHead(Node*& head, int &val) {
	Node* n = new Node(val);
	n->next = head;
	head = n;
}

void insertAfter(Node*& head, int &key, int &val){
	Node* n = new Node(val);
	if (key == head->data) {
		n->next = head->next;
		head->next = n;
		return;
	}

	Node* temp = head;
	while (temp->data != key) {
		temp = temp->next;
		if (temp == NULL) {
			return;
		}
	}
	n->next = temp->next;
	temp->next = n;
}

void insertAtTail(Node*& head, int &val) {
	Node* n = new Node(val);
	if (head == NULL) {
		head = n;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

void print(Node*& head)
{
	Node* temp = head;
	while (temp != NULL) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}
	std::cout << "NULL" << std::endl;
}

int getCountRecursively(Node* head)
{
    int count = 0; // Initialize count
    Node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
	Node* head = NULL; // starting with that mpty LL

    int data = 1, key = 1;

	insertAtHead(head, data);
	print(head);

    data = 5;
	insertAtTail(head, data);
	print(head);

    data =7;
	insertAfter(head, key, data);
	print(head);

    data = 9;
    insertAtTail(head, data);
	print(head);

    std::cout << "Total nodes: " << getCountRecursively(head) << std::endl;

	return 0;
}

