#include<stdio.h>
#include<stdlib.h>
typedef struct stack  STACK;

struct stack{
int top;
int data[10];

};
void push(STACK *stk,int data ){
    if(stk->top==9){
        printf("Stack is full\n");
    }else{
    stk->top++;
    stk->data[stk->top]=data;

    }
}
int pop(STACK *stk){
    int temp;

    if(stk->top==-1){
        printf("Stack is Empty\t");
        return NULL;
    }else{
        temp=stk->top;
        stk->top--;
        return stk->data[temp];


    }

}
 int main(){
 STACK s;
 s.top=-1;

 push(&s,10);
 push(&s,20);
 push(&s,30);
 push(&s,40);

 push(&s,50);
 push(&s,60);
 push(&s,70);
 push(&s,80);

 push(&s,90);
 push(&s,100);
 push(&s,110);
 push(&s,120);
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 push(&s,110);
 push(&s,120);
 printf("%d\n",pop(&s));
 printf("%d\n",pop(&s));
 }
