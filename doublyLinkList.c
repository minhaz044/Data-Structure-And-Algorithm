
#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *prev;
struct node *next;

};

 struct node *createNode(int data ,struct node *prev,struct node *next){

 struct node *newnode=(struct node *)malloc(sizeof (struct node));
 if(newnode == NULL){
 printf("No memory Allocated");
 exit(1);
 }else{
    newnode->data=data;
    newnode->prev=prev;
    newnode->next=next;
    return newnode;
 }

 }
 struct node *insertnode(int index,struct node *newnode,struct node *head){


    struct node *temp=(struct node *)malloc(sizeof (struct node));
    struct node *tempprev=(struct node *)malloc(sizeof (struct node));
    temp=head;
    if(index==1){
    newnode->next=head;
    head=newnode;
    return head;

    }else{

    for(int i=1;i<=index-1;i++){

        tempprev=temp;
        temp=temp->next;
        if(temp==NULL){

            tempprev->next=newnode;
            newnode->prev=tempprev;
            newnode->next=NULL;
            return head;


        }
       else if(i==index-1){
            tempprev->next=newnode;
            newnode->prev=tempprev;
            newnode->next=temp;
            temp->prev=newnode;

            return head;

        }else{}



    }
    }


 }

 struct node *deleteNode(int index ,struct node *head){
    struct node *temp=(struct node *)malloc(sizeof (struct node));
    struct node *tempprev=(struct node *)malloc(sizeof (struct node));
    temp=head;
    if(index==1){
    head=temp->next;
    free(temp);
    temp=head;
    temp->prev=NULL;
    head=temp;
    return head;
    }else{

    for(int i=1;i<=index-1;i++){

        tempprev=temp;
        temp=temp->next;
        if(i==index-1){
            tempprev->next=temp->next;
            free(temp);
            temp=tempprev->next;
            temp->prev=tempprev;
            return head;
        }


    }
    }

 }
 void printdataforward(struct node *head){
    struct node *temp=(struct node *)malloc(sizeof (struct node));
    temp=head;
 int i=0;
 while(temp!= NULL){

 i++;
 printf("Index Number %d and node->data = %d\n",i,temp->data);
 temp=temp->next;

 }
 }

 void printdata(struct node *head){
    struct node *temp=(struct node *)malloc(sizeof (struct node));
    struct node *prev=(struct node *)malloc(sizeof (struct node));
    temp=head;
 int i=0;
  printf("\tPrinting data fwordly\n");
 while(temp!= NULL){

 i++;
 printf("Index Number %d and node->data = %d\n",i,temp->data);
 prev=temp;
 temp=temp->next;



 }
  printf("\tPrinting data bwordly\n");
  while(prev!= NULL){


 printf("Index Number %d and node->data = %d\n",i,prev->data);
 prev=prev->prev;
 i--;

 }
 }


int main(){

struct node *head;
head=createNode(300,NULL,NULL);
head=insertnode(1,createNode(100,NULL,NULL),head);
head=insertnode(2,createNode(200,NULL,NULL),head);
printdata(head);
printf("\t afetr Del operation\n");
head=deleteNode(2,head);
printdata(head);

}
