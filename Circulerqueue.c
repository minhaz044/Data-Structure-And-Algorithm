#include<stdio.h>
#include<stdlib.h>
typedef struct queue  QUEUE;

struct queue{
int head;
int tail;
int data[11];

};
void enqueue(QUEUE *que,int data ){
    if(que->head==(que->tail+1)%11){
        printf("Queue is full\n");
    }else{
    que->data[que->tail]=data;
    que->tail=(que->tail +1)%11;

    }
}
int dequeue(QUEUE *que){
    int temp;

    if(que->head==que->tail){
        printf("Queue is Empty\t");
        return NULL;
    }else{
        temp=que->head;
        que->head=(que->head+1)%11;
        return que->data[temp];

    }

}
 int main(){
 QUEUE q;
 q.head=0;
 q.tail=0;

 enqueue(&q,10);
 enqueue(&q,20);
 enqueue(&q,30);
 enqueue(&q,40);

 enqueue(&q,50);
 enqueue(&q,60);
 enqueue(&q,70);
 enqueue(&q,80);

 enqueue(&q,90);
 enqueue(&q,100);
 enqueue(&q,110);
 enqueue(&q,120);
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 enqueue(&q,110);
 enqueue(&q,120);
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 printf("%d\n",dequeue(&q));
 enqueue(&q,130);
 printf("%d\n",dequeue(&q));
 }
