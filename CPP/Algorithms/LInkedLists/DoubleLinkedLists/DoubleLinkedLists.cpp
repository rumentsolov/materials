//Minimize the memory allocation work algorithm

#include <iostream>

class Node {
public:
	int data;
	Node* next;
	Node* prev;
	Node(int value) : data(value) , next(NULL), prev(NULL) {}
};

void insertAtHead(Node*& head, int &val) {
	Node* newNode = new Node(val);
	newNode->next = head;
	newNode->prev = NULL;
	head = newNode;
}

void insertAfter(Node*& prevNode, int &key, int &val){

	if (prevNode == NULL)  return; // Can not be NULL

		Node* newNode = new Node(val); // Allocating and put the data into the new node
		newNode->next = prevNode->next; // Making next of newNode as next of prevNode 
		prevNode->next = newNode; // Making the next of prevNode as newNode
		newNode->prev = prevNode; // Making prevNode as previous of newNode *
		if (newNode->next != NULL) newNode->next->prev = newNode; // Changing previous of newNode's nextNode
}

void append(Node*& head, int &val) {
	Node* newNode = new Node(val);
	newNode->next = NULL; // This new node is going to be the last node, so NULL

	if (head == NULL) { // if list is empty I make the new node to be head
        newNode->prev = NULL;
        head = newNode;
        return;
    }

	Node* lastNode = head; // traverse till the last node
 	while (lastNode->next != NULL)
        lastNode = lastNode->next;

	lastNode->next = newNode; // Changing the next of last node 
	newNode->prev = lastNode; // Making the last node as previous of newNode
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
	Node* head = NULL; // Starting with that mpty LL

    int data = 1, key = 1;

	insertAtHead(head, data);
	print(head);

    data = 5;
	append(head, data);
	print(head);

    data =7;
	insertAfter(head, key, data);
	print(head);

    data = 9;
    append(head, data);
	print(head);

    std::cout << "Total nodes: " << getCountRecursively(head) << std::endl;

	return 0;
}

