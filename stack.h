#include<stdio.h>
#include<stdlib.h>
#ifndef _Stack_h
#define _Stack_h
extern int gall;
struct st;
typedef struct st{
	int num;
	struct st* nt;
} stack;
typedef stack* stak;
void pop(stak* a);//delete 
void push(stak* a,int numb);// insert
void top(stak* a);//output 
stak init(int numb);// create 
#endif
