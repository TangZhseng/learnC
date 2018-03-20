#include<stdio.h>
#include<stdlib.h>
#ifndef _Stack_h
#define _Stack_h
struct st;
typedef struct st stack;
typedef stack* stak;
int Isfull(stak S);
int IsEmpty(stak S);
void pop(stak S);
void push(stak S ,int numb);
stak crkt(int maxsize); 
#endif
