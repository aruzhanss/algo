#include<iostream>
using namespace std ; 
class Node{
    public: 
    int data; 
    Node* next ; 
    Node(int data){
     this->data = data ;
     this->next = NULL ; 
     }
}; 
class LinkedList{
    Node *head ; 
    Node *tail ; 
LinkedList(){
    this->head=NULL;  
    this->tail=NULL ; 
}
void insert_ll(int data){
    Node *node= new Node (data) ; 
    if(!this->head){
        this->head = node ; 
    }else{
        this->tail->next=node; 
    }
    this->tail = node ;  
}
void print(){
    while(head != NULL){
        cout<<head->data<<endl ; 
    head->head->next ; 
    }
}

}


int main(){
    return 0  ; 
}
