#include"stack.h"
int gall=2;
stak init(int numb){
	stak first;
	first=(stak)malloc(sizeof(stack));
	first->num=numb;
	first->nt=NULL;
	return first;
}
void push(stak *a,int numb){
	stak may;
	may=init(numb);
	may->nt=*a;
	*a=may;
}
void pop(stak* a){
	stak may;
	may=*a;
	*a=may->nt;
	free(may);
}


