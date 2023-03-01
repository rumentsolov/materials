#include <iostream>

class Node{
    public:
    int value;
    Node* next;
    Node(int d){
        value = d;
        next = NULL;
    }
};


void print(Node* &head){
	Node*temp=head;

	while(temp!=NULL){
		std::cout<<temp->value<<" ";
		temp = temp->next;
	}
	return;
}

void insertAtTail(Node* &head ,int d){
    Node* n = new Node(d);
    if(head == NULL)
        head = n; 
    else{
        Node* temp = head;

        while(temp->next != NULL)
        temp = temp->next;
        
        temp->next = n;
    }
    return;
}

void insertAtHead(Node* &head ,int d){
	Node* n = new Node(d);
	if(head == NULL)
		head = n;	
	else{
		n->next = head;
		head = n;
	}
	return;
}

void insertAfterNode(Node* &head, int d, int position){
	Node* n = new Node(d);
	if(position == 1){
		n->next = head;
		head = n;	
	}
	else{
		Node* temp = head;
            position = position-1;
            while(position--)
                temp = temp->next;
            
            n->next = temp->next;
            temp->next = n;
        }
	return;
}

void deletionAtHead(Node* &head){
	if(head == NULL)
		std::cout<<"List is empty"<<std::endl;	
	else{   
        Node* temp = head;
		head = temp->next;	
        free(temp);
        }
	return;
}

void deletionAtTail(Node* &head){
        if(head == NULL)
        std::cout<<"List is empty"<<std::endl;
        if(head->next == NULL){
            delete head;
            head= NULL;
        }      
        else{
            Node* temp = head;
            while((temp->next)->next != NULL)
            temp= temp->next;
            
            delete(temp->next);
            temp->next = NULL;
        }
    return;
}

void deletionAtOther(Node* &head, int position){
        if(head == NULL)
        std::cout<<"List is empty"<<std::endl;

        if(position == 1){
            delete head;
            head = NULL;	
        }
        else{
            
            Node* t2 = head;
            Node* t1 = head;
            position--;

            while(position--)
                t1 = t1->next;
            
            t2 = t1->next->next; 
            free(t1->net);               
            t1->next = NULL;
        }
	return;
}

int main(){
    
    return 0;
}