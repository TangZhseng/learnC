#include<stdio.h>
#include<stdlib.h>
#ifndef _Tree_H
#define _Tree_H
struct nd {
	int data;
	struct nd* ri;
	struct nd* lf;
};
typedef struct nd node;
typedef node* BT;
BT Createtree(void);
void Traveltree(BT tr);
int Isemptytree(BT tr);
void Createbionode(BT tr);
#endif 
