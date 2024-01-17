#include<stdio.h>
#include<stdlib.h>
#define max 20
#include<limits.h>
struct Queue{
	int arr[max];
	int rear,front;
	
};
struct Queue* createqueue(){
	struct Queue *p = (struct Queue*)malloc(sizeof(struct Queue));
	p->front=-1;
	p->rear=-1;
	return p;
}
void enqueue(struct Queue *q,int insert){
	if(q->front == -1){
		q->front+=1;
	}
	if(q->rear == max-1){
		printf("overflow");
	}
	else{
		q->rear=q->rear+1;
		q->arr[q->rear]=insert;
	}
}
int dequeue(struct Queue *q){
	if(q->front == -1){
		printf("underflow");
		return INT_MIN;
	}
    else if(q->front==q->rear){
        q->front=q->rear=-1;
    }
	else{
		int a=q->front;
		q->front=q->front+1;
		return a;
	}
}
void print(struct Queue *q){
    if(q->rear==-1&&q->front==-1) printf("erroe");
    else{
        while(q->front<=q->rear){
             printf("%d ",q->arr[q->front]);
             q->front+=1;
        }
    }
}


int main(){
	struct Queue *q=createqueue();
	enqueue(q,3);
	enqueue(q,2);
	enqueue(q,8);
	enqueue(q,6);
	enqueue(q,3);
	enqueue(q,2);
	enqueue(q,8);
	enqueue(q,6);
	dequeue(q);
    dequeue(q);
	print(q);
	
}