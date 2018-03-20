#include<stdio.h>
#include<stdlib.h>
#ifndef _Stackl_h_
#define _Stackl_h_
struct st;
typedef struct st node;
typedef node* lnode;
lnode creat(void);
int isemty(lnode S);
void push(lnode S,int X);
void pop(lnode S);

#endif

