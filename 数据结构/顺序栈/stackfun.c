#include"stack.h"
struct st{	
    int* data;
	int top;
	int maxsize;
};
stak crkt(int size){
	stak S;
	S=(stack *)calloc(1,sizeof(stack));
	S->data=(int *)calloc(size,sizeof(int));
	S->top=-1;
	S->maxsize=size;
	return S;
}
int IsEmpty(stak S){
	if(S->top==-1){
	 return 1;
	}
	else
	 return 0; 
}
int Isfull(stak S){
	if(S->top==S->maxsize-1){
		return 1;
	}
	else 
	   return 0;
}
void push(stak S,int numb){
	if(Isfull(S)){
		printf("stack is full,plesea pop");
	}
	else{
	  S->top=S->top+1; 
	  S->data[S->top]=numb;
	} 
}
void pop(stak S){
	if(IsEmpty(S)){
		printf("stack is emty,error");
	}
	else{
	    printf("S->data[top]=%d",S->data[S->top]);
	    S->data[S->top]=0;
        S->top=S->top-1;
}
}


