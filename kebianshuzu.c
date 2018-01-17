#include"array.h"
Array array_create(int init_size){
	Array a;
	a.size=init_size;
	a.p=(int*)calloc(init_size,sizeof(int));
	return a;
};
void array_free(Array *a){
	free(a->p);
	a->p=NULL;
	a->size=0;
};
int array_size(Array *a){
	int i;
	for(i=0;)
};
int *array_at(Array *a,int index);
void array_inflate(Array *a,int more_size);
