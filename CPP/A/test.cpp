#include <iostream>

class Node{
    public:
    int value;
    Node* next;
    Node* prev;
    Node(int value_): value(value_) { next = NULL; prev = NULL;} // for new Node
    Node(int value_, Node* prev_,Node* next_): value(value_), prev(prev_), next(next_) {} // for adding new Node
};

 Node * addNodeAfter(Node* node , int &input , Node* head){
    Node* nextNode = new Node(input); 
    // (prev)<-[node]->(next)(prev)<-[nextNode(input)]->(next)(prev)<-[]->(next)
    nextNode->next = node->next ; 
    node->next = nextNode; 
    nextNode->prev = node; // assign prev pointer to the given node

    if(nextNode->prev==NULL)head->prev = nextNode;
    return nextNode; // return
 }


 Node * addNodeBefore(Node* node , int &input, Node* head){
    Node* prevNode = new Node(input); 
    // (prev)<-[node]->(next)(prev)<-[prevNode(input)]->(next)(prev)<-[]->(next)
    
    prevNode->prev = node->prev;
    prevNode->next = node;
    node->prev = prevNode;
    
    if(prevNode->prev==NULL)head->prev = prevNode;
    return prevNode; // return
 }

void printForward(Node* head){
Node* iterator = head;
    while(iterator!= NULL){
        std::cout << iterator->value << " ";
        iterator = iterator->next;
    }
    std::cout << std::endl;
}

int main(){
   
    int input = 7;
    Node* head; // to keep the head of the list to be able to print it
    Node* firstNode = new Node(input); // 
    head = firstNode;

    printForward(head);
    input = 5;
    Node* secondNode = addNodeAfter(firstNode , input , head);
    printForward(head);

    input = 9;
    Node* forthNode = addNodeBefore(firstNode , input, head);
    printForward(head);

    input = 3;
    addNodeAfter(secondNode , input, head);
    printForward(head);

    input = 1;
    Node* thirdNode = addNodeAfter(firstNode , input, head);
    printForward(head);

    input = 4;
    Node* fifthNode = addNodeAfter(firstNode , input, head);
    printForward(forthNode);

    return 0;
}