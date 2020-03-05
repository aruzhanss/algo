#include<iostream>
using namespace std ; 
    class Node{
        public:
        int data ; 
        Node *left, *right ; 
        Node ( int data){
        this -> data = data ; 
        }
    } ;
    class BST {
        public:
    Node *root ;
    BST(){
        root = NULL ; 
    }
        Node *insert ( Node * node, int data){
            if( node == NULL)
            node = new Node (data);
            return node ;
            if(node -> data <= data ){
        node -> left = insert(node -> left, data);
        }else{
         node -> right = insert(node -> right, data);
        }

        }
    Node *findr(Node *node){
        while(node->data!=0){
        if (node ->right==NULL && node ->left ==NULL)
        return node ;
    } 
    void print(Node *node){
        if(node==NULL){
        return;
        }
        print(node->left);
        cout << node ->data << " " ; 
        print(node->right) ;
    } 
    }
    };
    int main(){
    BST* bst = new BST;
    bst -> root = bst ->insert(bst->root,7); 
    bst -> root = bst ->insert(bst->root,3); 
    bst -> root = bst ->insert(bst->root,2);
    bst -> root = bst ->insert(bst->root,1); 
    bst -> root = bst ->insert(bst->root,9); 
    bst -> root = bst ->insert(bst->root,5);
    bst -> root = bst ->insert(bst->root,4); 
    bst -> root = bst ->insert(bst->root,6); 
    bst -> root = bst ->insert(bst->root,8);
    bst -> root = bst ->insert(bst->root,0);

    cout << bst->findr(bst->root)->data<< endl;
    bst -> print(bst->root) ; 
    return 0;
    }