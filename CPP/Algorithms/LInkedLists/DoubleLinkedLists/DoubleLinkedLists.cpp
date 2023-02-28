#include <iostream>
#include <sstream>
#include <vector>

class Node{
    public:
    int value;
    Node* next;
    Node* prev;

};

//! Iterating true the nodes Forward
void printForward(Node* head){
Node* iterator = head;
    while(iterator!= NULL){
        std::cout << iterator->value << " ";
        iterator = iterator->next;
    }
    std::cout << std::endl;
}

//! Iterating true the nodes Forward
void printBackward(Node* tail){
Node* iterator = tail;
    while(iterator!= NULL){
        std::cout << iterator->value << " ";
        iterator = iterator->prev;
    }
    std::cout << std::endl;
}

void insert_at_front(Node** head, int value){
    Node* node = new Node(); // create a new node with given data
    node->value = value;
    node->prev = NULL; // assign previous pointer to NULL
    node->next = (*head);  // assign next pointer to the current head node
    if((*head) != NULL) // if the list is not empty, set the current head's previous pointer to new node
        (*head)->prev = node;
    
    (*head) = node; // point the head to the new node
    return;
}

void insert_after_given_node(Node* given_node, int value){
    Node* node = new Node(); // create a new node with given data
    node->value = value;
    node->next = given_node->next; // assign next pointer to next of given node
    given_node->next = node; // assign next pointer of given node to the new node
    node->prev = given_node; // assign previous pointer of new node to the given node
    if(node->next != NULL){ // assign the next pointer of the node before the given node to new node
        node->next->prev = node;
    }
    
    return;
    
}

void insert_at_end(Node** head, int value){
    
    // create a new node with given data
    Node* node = new Node();
    node->value = value;
    node->next = NULL;// assign next pointer to NULL
    if((*head) == NULL)// if linked list is empty
        node->prev = NULL; // this is the only node in the list
    Node* end = (*head);
    while(end->next != NULL)// travel to the end of the list
        end = end->next;

    end->next = node;// assign the new node after the end node
    node->prev = end; // assign previous of new node to the current end node
    return;
    
}


int main(){

   
    //! First node creation 
    Node* node = new Node(); // its pointer because we are dynamically changing the size of the list => we are adding a new nodes
    node ->value = 4;
    Node* head = node; // this is the beggining of the Linked LIST
    Node* tail = node; // this is the end of the Linked LIST

    /*
    //! Second node creation
    node = new Node();
    node ->value = 5;
    node ->next = nullptr; 
    node ->prev = tail;
    tail ->next = node;
    tail = node;
    */

    insert_after_given_node(head, 6); // 4 6
    insert_at_front(&head, 7); // 7 4 6
    insert_at_end(&head, 9); // 7 4 6 9
    //printBackward(tail);
    //printForward(head);
    return 0;
}