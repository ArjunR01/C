# include <stdio.h>
# include <stdlib.h>

struct node *insertatbeginning(strcut node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct node *insertatindex(struct node *head,int index, int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    i=0;
    while(i!=(index-1)){
        p=p->next;
        i++;
    }
ptr->data=data;
ptr->next=p->next;
p->next=ptr;

}

struct node *insertatend(struct node *head,int data){
struct node *ptr=(strcut node*)malloc(sizeof(struct node));
struct node *p=head;
while(p->next!=NUll){
    p=p->next;
}
ptr->data=data;
p->next=ptr;
ptr->next=NULL:
}

struct node *insertatnode(struct node *head,struct node *previous,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=previous->next;
    previous->next=ptr;
}