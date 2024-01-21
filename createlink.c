# include <stdio.h>
# include <stdlib.h>
struct node{
   int data;
    struct node* next;
};

void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("Elemnt is %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertatbeginning(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

struct node *insertatindex(struct node *head,int index, int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=(index-1)){
        p=p->next;
        i++;
    }
ptr->data=data;
ptr->next=p->next;
p->next=ptr;

}

struct node *insertatend(struct node *head,int data){
struct node *ptr=(struct node*)malloc(sizeof(struct node));
struct node *p=head;
while(p->next!=NULL){
    p=p->next;
}
ptr->data=data;
p->next=ptr;
ptr->next=NULL;
}

struct node *insertatnode(struct node *head,struct node *previous,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=previous->next;
    previous->next=ptr;
}

struct node *deleteatbeginning(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
   
}


struct node *deleteatindex(struct node *head,int index){
    struct node *ptr1=head;
    struct node *ptr2=head->next;
    int i=0;
    while(i!=(index-1)){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        i++;
    }
    ptr1->next=ptr2->next;
    free(ptr2);
    return head;
}


struct node *deleteatend(struct node *head){
    struct node *ptr1=head;
    struct node *ptr2=head->next;
    while(ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=NULL;
    free(ptr2);
    return head;
}

void main(){
   
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct  node));
    fourth=(struct node*)malloc(sizeof(struct  node));

head -> data =4;
head->next= second;

second -> data=5;
second -> next=third;

third-> data=6;
third->next=fourth;

fourth->data=7;
fourth->next=NULL;

traversal(head);
while(1){
printf("Enter your choice : ");
int choice;
scanf("%d",&choice);
switch(choice){
    case (1):{
        int data;
        printf("Enter the data:");
        scanf("%d",&data);
        head=insertatbeginning(head,data);
    }
    break;
    case (2):{
        int data,index;
        printf("Enter the index:");
        scanf("%d",&index);
        printf("\n Enter the data :");
        scanf("%d",&data);
        insertatindex(head,index,data);
    }break;
    case (3):{
        int data;
        printf("Enter the data:");
        scanf("%d",&data);
        insertatend(head,data);
    }break;

    case (4):{
        head=deleteatbeginning(head);
    }break;

    case(5):
    {
        int index;
        printf("Enter indext :");
        scanf("%d",&index);
        deleteatindex(head,index);
    }
break;

    case(6):{
        head=deleteatend(head);
    }break;
}
printf("\n new list : \n");
traversal(head);
}


}




