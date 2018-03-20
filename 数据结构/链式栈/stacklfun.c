#include"stackl.h"
struct st{
	int num;
	struct st* nt;
};
lnode creat(void){
	lnode S=(lnode)malloc(sizeof(node));
	S->nt=NULL;
	return S;
}
int isemty(lnode S){
	if(S->nt==NULL){
		return 1;
	}
	else
	  return 0;
}
void push(lnode S,int X){
	lnode tmp=(lnode)malloc(sizeof(node));
	tmp->num=X;
	tmp->nt=S->nt;
	S->nt=tmp; 
}
void pop(lnode S){
	lnode tmp=S->nt;
	if(isemty(S)){
		printf("error");
	}
	else{
		S->nt=tmp->nt;
		printf("pop X=%d",tmp->num);
		free(tmp);
	}  
}

