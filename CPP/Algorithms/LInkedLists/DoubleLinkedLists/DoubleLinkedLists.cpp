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
    
    // create a new node with given data
    Node* node = new Node();
    node->value = value;
    
    // assign previous pointer to NULL
    node->prev = NULL;
    
    // assign next pointer to the current head node
    node->next = (*head);
    
    // if the list is not empty, set the current head's previous pointer to new node
    if((*head) != NULL){
        (*head)->prev = node;
    }
    
    // point the head to the new node
    (*head) = node;
    
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

void insert_at_end(node** head, int data){
    
    // create a new node with given data
    node* new_node = new node();
    new_node->data = data;
    
    // assign next pointer to NULL
    new_node->next = NULL;
    
    // if linked list is empty
    if((*head) == NULL){
        // this is the only node in the list
        new_node->prev = NULL;
    }
    
    node* end = (*head);
    
    // travel to the end of the list
    while(end->next != NULL){
        end = end->next;
    }
    
    // assign the new node after the end node
    end->next = new_node;
    
    // assign previous of new node to the current end node
    new_node->prev = end;
    
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
    printForward(head);
    //printBackward(tail);
    insert_after_given_node(head, 6);
    insert_at_front(&head, 7);

    printForward(head);

    return 0;
}