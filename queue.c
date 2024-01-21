// Queue implementation in C

#include <stdio.h>
# include <stdlib.h>
#define SIZE 5

void enqueue();
void dequeue();
void display();

int items[SIZE], front = -1, rear = -1;

void main() {
while(1){
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: enqueue();
                break;
        case 2: dequeue();
                break;
        case 3: display();
                break;
        default: exit(0);
                                    
    }
  
}}

void enqueue() {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    int value;
    if (front == -1)
      front = 0;
    rear++;
    scanf("%d",&value);
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void dequeue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}