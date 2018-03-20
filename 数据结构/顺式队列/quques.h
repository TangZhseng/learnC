#include<stdio.h>
#include<stdlib.h>
#ifndef _QueueS_h
#define _QueueS_h
#define maxsize 4
struct que;
typedef struct que quenode;
typedef quenode* quep;
quep creat(void);
int isfull(quep q);
void addq(quep q,int data);
int isempty(quep q);
int pop(quep q);
#endif
