#include<bits/stdc++.h>
#include<iostream>
using namespace std ; 
    class Node{
        int data ; 
        Node *left, *right ; 
        Node ( int data){
        this -> data = data ; 
        }
    }
    class BST {
    Node *root ;
    BST(){
        root = null ; 
    }
        Node *insert ( Node * node, int data){
            if( node == null)
            node = new Node (data);
            return node ;  
        }
        if(node -> data <= data ){
        node -> left = insert(node -> left, data);
        }else{
         node -> right = insert(node -> right, data);
        }
    }
    Node *find_max(Node *node){
        while (node ->right!=null)
        node = node -> right ;
        return node ;
    }
    int main(){

    BST* bst = new BST;
    bst -> root = bst ->insert(bst->root,10); 
    bst -> root = bst ->insert(bst->root,11); 
    bst -> root = bst ->insert(bst->root,8);
    cout << bst->find_max(bst->root)->data<< endl;
    cout << bst->find_min(bst->root)->data;
    return 0;
}