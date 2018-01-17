#include"shuzu.h"
int main(){
	Array a=array_create(10);
	printf("%d\n",a.size);
	int index=0,i;
	while(index!=10){
		array_set(&a,index,index);
		printf("%d\n",index);
		index++;
	}
	array_inflate(&a,15);
	printf("size=%d",a.size);
	
	
}
