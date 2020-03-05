#include<iostream>
using namespace std ;
  class Node{
    public: 
    int data; 
    Node *next ; 
        Node(int data){
        this->data=data ;
        next = NULL ;  
        }
    };
class Queue{
    public: 
    Node *tail , *front ;  
    Queue(){
        tail = NULL ; 
        front = NULL; 
    }
    void push(int data){
        if(front == NULL){
            Node *node= new Node(data) ; 
            tail = node; 
            front = node ; 
        }else{
            Node *node = new Node(data) ;
            tail -> next = node ; 
            tail = node ; 
        }
    }
};
int main(){
    return 0; 
}