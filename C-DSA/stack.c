#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX], top=-1;

void push(){
  int data;
  if (top == MAX-1){
    printf("Overflow");
  }
  else{
    top += 1;
    printf("Enter data: ");
    scanf("%d", &data);
    stack[top] = data;
  }
}

void pop(){
  int temp;
  if (top == -1){
    printf("Underflow");
  }
  else{
    temp = stack[top];
    top -= 1;
    printf("The element %d was popped from the stack.", temp);
  }
}

void show(){
  for (int i = top; i >= 0; i--){
    printf("%d\n", stack[i]);
  }
}

int main(){
  int choice;
  do {
    printf("\n1 (Push), 2 (Pop), 3 (Show), 4 (exit)");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    switch(choice){
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        show();
        break;
      case 4:
        exit(0);
    }
  }while (choice != 4);
}
