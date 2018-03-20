#include"quques.h"
struct que{
	int data[maxsize];
	int rear;
	int front;
	int size; 
};
quep creat(void){
	quep q=(quep)malloc(sizeof(quenode));
	q->front=0;
	q->rear=0;
	q->size=0;
	return q;
}
int isfull(quep q){
	if(q->size==maxsize){
		return 1;
	}
	else
	   return 0;
}
void addq(quep q,int data){
	if(isfull(q)){
		printf("full!\n");
	}
	else{
		q->rear=(q->rear+1)%maxsize;
		q->data[q->rear]=data;
		q->size=q->size+1;
		printf("size=%d\n",q->size);
	}
}
int isempty(quep q){
	if(q->size==0){
		return 1;
	}
	else 
	  return 0; 
}
int pop(quep q){
	if(isempty(q)){
		printf("empty\n");
		return 1;
	}
	else{
		q->front=(q->front+1)%maxsize;
		printf("now is %d\n",q->data[q->front]);
		q->data[q->front]=0;
		q->size=q->size-1;
		printf("size=%d\n",q->size);
	}
}
