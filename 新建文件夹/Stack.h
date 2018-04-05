#include<stdio.h>
#include<stdlib.h>
#include"biotree.h"
#ifndef _Stack_H
#define _Stack_H
struct stack;
typedef struct stack Stack;
Stack* CreateStack(int maxsize);
int IsStackempt(Stack S);
int IsStackfull(Stack S);
void Push(Stack* S, BT tr);
BT Pop(Stack* S);
void InoderTravel(BT tr, Stack* S);
#endif // !_Stack_H

