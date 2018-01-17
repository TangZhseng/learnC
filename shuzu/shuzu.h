#include<stdio.h>
#include<stdlib.h>
#ifndef _DOARR_H_
#define _DOARR_H_
typedef struct {
	int size;
	int *p;
}Array; 
Array array_create(int init_size);
void array_free(Array *a);
int array_size(Array *a);
int *array_at(Array *a,int index);
int array_get(Array *a,int index);
void array_set(Array *a,int index,int value);
void array_inflate(Array *a,int more_size);

#endif

