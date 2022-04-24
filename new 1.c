// program to insert a node at the beginning of a linked list
#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *link;
};
//using pointer to a pointer
Void AddNode(struct node ** head, int d){
//creating new node d
struct node *ptr =malloc(sizeof(struct node));
ptr->data = d;
ptr->link=NULL;
ptr->link=(*head);
// dereferencing head to get the address in head pointer in the main
//function
(*head) = ptr;
return head;
}