#include <iostream>

class Node{
    public:
    int value;
    Node* next;
    Node(int value_): value(value_) { next = NULL ;} // for new Node
    Node(int value_, Node* next_): value(value_), next(next_) {} // for adding new Node
};

 Node * addNodeAfter(Node* node , int &input , Node* head){
    Node* nextNode = new Node(input); 
    //! [node](next)->[nextNode(input)]->[-](next)->
    nextNode->next = node->next ; 
    node->next = nextNode; 
    if(nextNode->next==NULL)head = nextNode;
    return nextNode; 
 }

 Node * addNodeBefore(Node* node , int &input, Node* head){
    Node* prevNode = new Node(input); 
    //! [-](next)->[nextNode(input)]->[node](next)->
    prevNode->next = node->next ; 
    node->next = prevNode; 
    if(prevNode->next==NULL)head = prevNode;
    return prevNode; 
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
    printForward(head);

    return 0;
}