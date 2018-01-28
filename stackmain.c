#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#define cube(x) ((x)*(x)*(x))
int main(){
	stak now;
	now=init(1);
	printf("%d\n",now->num);
	push(&now,2);
	printf("%d\n",now->num);
	printf("%d\n",(now->nt)->num);
	printf("%f\n%d\n",cube(2.7),cube(gall));
	pop(&now);
	printf("%d\n",now->num);
}
