#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

void push(struct node** head_ref, int new_data){
  struct node* new_node = (struct node*) malloc(sizeof(struct node));
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}

void show_list(struct node *nde){
  while (nde != NULL){
    printf(" %d ", nde->data);
    nde = nde->next;
  }
}

// Main caller
int main(){
  struct node* head = NULL;
  push(&head, 12);  // Linkedlist is now 12->NULL
  push(&head, 44);  // Linkedlist is now 44->12->NULL;

  printf("\nLinkedlist is: \n");
  show_list(head);
  printf("\n");
}
