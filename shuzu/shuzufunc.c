#include"shuzu.h"
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
/*fengzhuang*/
int array_size(Array *a){
	return a->size ; 
};
int *array_at(Array *a,int index){
	return &(a->p[index]);
}
int array_get(Array *a,int index){
	if(index<a->size){
	 return a->p[index];}
	else
	 printf("error,index is over"); 
	
};
void array_set(Array *a,int index,int value){
	if(index<a->size){
	 a->p[index]=value;}
	else 
	 printf("error,index is over");
};
void array_inflate(Array *a,int more_size){
	a->p=realloc(a->p,sizeof(int)*(a->size=a->size+more_size));
};
